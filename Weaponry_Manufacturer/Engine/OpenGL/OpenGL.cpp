#include "OpenGL.h"

OpenGL::OpenGL(void)
{
	hwnd = 0;
	hdc = 0;
	hglrc = 0;
}

OpenGL::OpenGL(System::IntPtr handle)
{
	hwnd = 0;
	hdc = 0;
	hglrc = 0;
	create(handle);
}

bool OpenGL::create(System::IntPtr handle)
{
	if (hdc || hglrc) 
		return false;
	
	hwnd = (HWND) handle.ToPointer();
	hdc = ::GetDC(hwnd);
	
	if(!setPixelFormat(32, 24, 8))
	{
		//::MessageBox(0, "Cannot set a suitable pixel format.", "Error", MB_ICONEXCLAMATION | MB_OK);
		::ReleaseDC(hwnd, hdc);                     // remove device context
		return false;
	}
	
	hglrc = ::wglCreateContext(hdc);
	::wglMakeCurrent(hdc, hglrc);

	return true;
}

int OpenGL::findPixelFormat(HDC hdc, int colorBits, int depthBits, int stencilBits)
{
    int currMode;                               // pixel format mode ID
    int bestMode = 0;                           // return value, best pixel format
    int currScore = 0;                          // points of current mode
    int bestScore = 0;                          // points of best candidate
    PIXELFORMATDESCRIPTOR pfd;

    // search the available formats for the best mode
    bestMode = 0;
    bestScore = 0;
    for(currMode = 1; ::DescribePixelFormat(hdc, currMode, sizeof(pfd), &pfd) > 0; ++currMode)
    {
        // ignore if cannot support opengl
        if(!(pfd.dwFlags & PFD_SUPPORT_OPENGL))
            continue;

        // ignore if cannot render into a window
        if(!(pfd.dwFlags & PFD_DRAW_TO_WINDOW))
            continue;

        // ignore if cannot support rgba mode
        if((pfd.iPixelType != PFD_TYPE_RGBA) || (pfd.dwFlags & PFD_NEED_PALETTE))
            continue;

        // ignore if not double buffer
        if(!(pfd.dwFlags & PFD_DOUBLEBUFFER))
            continue;

        // try to find best candidate
        currScore = 0;

        // colour bits
        if(pfd.cColorBits >= colorBits) ++currScore;
        if(pfd.cColorBits == colorBits) ++currScore;

        // depth bits
        if(pfd.cDepthBits >= depthBits) ++currScore;
        if(pfd.cDepthBits == depthBits) ++currScore;

        // stencil bits
        if(pfd.cStencilBits >= stencilBits) ++currScore;
        if(pfd.cStencilBits == stencilBits) ++currScore;

        // alpha bits
        if(pfd.cAlphaBits > 0) ++currScore;

        // check if it is best mode so far
        if(currScore > bestScore)
        {
            bestScore = currScore;
            bestMode = currMode;
        }
    }

    return bestMode;
}

bool OpenGL::setPixelFormat(int colorBits, int depthBits, int stencilBits)
{
    PIXELFORMATDESCRIPTOR pfd;

    // find out the best matched pixel format
    int pixelFormat = findPixelFormat(hdc, colorBits, depthBits, stencilBits);
    if(pixelFormat == 0) return false;
	
    // set members of PIXELFORMATDESCRIPTOR with given mode ID
    ::DescribePixelFormat(hdc, pixelFormat, sizeof(pfd), &pfd);

    // set the fixel format
    if(!::SetPixelFormat(hdc, pixelFormat, &pfd))
        return false;

    return true;
}

void OpenGL::swapBuffers(void)
{
	::SwapBuffers(hdc);
}

void OpenGL::makeCurrent(void)
{
	::wglMakeCurrent(hdc, hglrc);
}

bool OpenGL::destroy(void)
{
    if(!hdc || !hglrc)
        return false;

    // delete DC and RC
    ::wglMakeCurrent(0, 0);
    ::wglDeleteContext(hglrc);
    ::ReleaseDC(hwnd, hdc);

	hwnd = 0;
    hdc = 0;
    hglrc = 0;

	return true;
}

OpenGL::~OpenGL(void)
{
	destroy();
}
