#define WIN32_LEAN_AND_MEAN		// Exclude rarely used stuff from <Windows.h>
#include <Windows.h>
#include <GL\GL.h>

public ref class OpenGL
{
public:
	OpenGL(void);							// Default constructor
	OpenGL(System::IntPtr handle);			// Construct using a given handle
	bool create(System::IntPtr handle);		// Create render context for the given handle
	void swapBuffers(void);					// SwapBuffers (display and render)
	void makeCurrent(void);					// Set this instance as current

	bool destroy(void);
	~OpenGL(void);

private:
	HWND hwnd;			// hwnd is Handle to Window (a window which we want to render on)
	HDC hdc;			// Handle to Device Context
	HGLRC hglrc;		// Handle to OpenGL Render Context

	static int findPixelFormat(HDC hdc, int colorBits, int depthBits, int stencilBits);
	bool setPixelFormat( int colorBits, int depthBits, int stencilBits);

};