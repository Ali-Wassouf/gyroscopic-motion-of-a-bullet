#include "Engine.h"

 //define a 3ds variable :v
Model_3DS ak_47;
Model_3DS ak_47_Full;
Model_3DS wrane;
Model_3DS znad;
Model_3DS mkzof;
Model_3DS ra9or;
Model_3DS nar;
Model_3DS nar2;
Model_3DS nar3;
Model_3DS hrm;
Model_3DS bullet2;
Model_3DS dafsh;
Model_3DS cartridge;
Model_3DS target;
//define variable
double _a=0;
double _move6a8et=0;
double _scaledNar = 0,_scaledNar2=0,_scaledNar3=0;
double _d = -4.28;
double _aaa=1;
double _c =0;
double _b = 0;
double _scaled = 1;
double _axes =0;
double _rotation=0;
double _hight=0;
double _thrw=0;
double angel=0;
bool coll = false;
double yColl;
double angleColl;
bool showDetails = true;
bool showTarget = true;

int top,down,Right,Left,front,back;

 void drawSkyBox()
{
	glPushMatrix();
	glLoadIdentity();
	glDisable(GL_DEPTH_TEST);	  // disable it if u want to draw another objects in the same time.. text for example
	glScaled(0.5,0.5,0.5);
	
	glBindTexture(GL_TEXTURE_2D,front);
	glBegin(GL_QUADS);

		//front
		glTexCoord2f(1,0) ; 		glVertex3f(0.5,-0.5,0.5); 
		glTexCoord2f(1,1) ;			glVertex3f(0.5,0.5,0.5);
		glTexCoord2f(0,1) ;			glVertex3f(-0.5,0.5,0.5);
		glTexCoord2f(0,0) ;			glVertex3f(-0.5,-0.5,0.5);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,back);
	glBegin(GL_QUADS);
		//back
	glTexCoord2f(0,0) ;		glVertex3f(0.5,-0.5,-0.5);
	glTexCoord2f(0,1) ;		glVertex3f(0.5,0.5,-0.5);
	glTexCoord2f(1,1) ;	glVertex3f(-0.5,0.5,-0.5);
	glTexCoord2f(1,0) ;	glVertex3f(-0.5,-0.5,-0.5);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,Right);
	glBegin(GL_QUADS);
		//right
		glTexCoord2f(1,0) ;		glVertex3f(0.5,-0.5,-0.5);
		glTexCoord2f(1,1) ;		glVertex3f(0.5,0.5,-0.5);
		glTexCoord2f(0,1) ;		glVertex3f(0.5,0.5,0.5);
		glTexCoord2f(0,0) ;		glVertex3f(0.5,-0.5,0.5);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,Left);
	glBegin(GL_QUADS);
		//left
		glTexCoord2f(1,0) ;		glVertex3f(-0.5,-0.5,0.5);
		glTexCoord2f(1,1) ;		glVertex3f(-0.5,0.5,0.5);
		glTexCoord2f(0,1) ;		glVertex3f(-0.5,0.5,-0.5);
		glTexCoord2f(0,0) ;		glVertex3f(-0.5,-0.5,-0.5);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,top);
	glBegin(GL_QUADS);
		//up
		glTexCoord2f(1,0) ;		glVertex3f(0.5,0.5,0.5);
		glTexCoord2f(1,1) ;		glVertex3f(0.5,0.5,-0.5);
		glTexCoord2f(0,1) ;		glVertex3f(-0.5,0.5,-0.5);
		glTexCoord2f(0,0) ;		glVertex3f(-0.5,0.5,0.5);
	glEnd();
	glBindTexture(GL_TEXTURE_2D,down);
	glBegin(GL_QUADS);
		//down
		glTexCoord2f(1,0) ;		glVertex3f(0.5,-0.5,-0.5);
		glTexCoord2f(1,1) ;		glVertex3f(0.5,-0.5,0.5);
		glTexCoord2f(0,1) ;		glVertex3f(-0.5,-0.5,0.5);
		glTexCoord2f(0,0) ;		glVertex3f(-0.5,-0.5,-0.5);

	glEnd();


	glEnable(GL_DEPTH_TEST);
	glPopMatrix();
}


char * convert_to_char(string add , float t , string unit )
{
	string s=add;
	stringstream out;
	out << t << "(" << unit << ")";
	s += out.str();

	char * c = new char [s.length()] ;

	for (unsigned int i = 0 ; i < s.length() ; i++)
		c[i]=s[i];
	return c;

}

void DisplayString(int x, int y, void* font, const char* str) {
  const char* c;

  // Position the cursor for font drawing
  glRasterPos2i(x, y);

  // Draw the font letter-by-letter
  for (c=str; *c != '\0'; c++)
    glutBitmapCharacter(font, *c);
}

  void Engine::printValues(double d,int i,string s, string unit)
{
	  
glPushMatrix();
	glLoadIdentity();
	gluLookAt(0,0,20 ,0,0,0,0,1,0);
	//glTranslatef(0,0,0); // hon translate ll rsm l7tta sir shoufo	   or 	 // ana bsir 3nd l 0,0,20	    or    both ... bisir l fr2 40 beni w ben l rsm :)
	//gluLookAt(0,0,20,0,0,0,0,1,0);    
	DisplayString(-8,7-i, GLUT_BITMAP_HELVETICA_10, convert_to_char(s + " = ", d , unit)) ;

glPopMatrix( );

}


Engine::Engine(System::IntPtr handle)
{
	gl = gcnew OpenGL();
	gl->create(handle);
	init();
}

void Engine::init(void)
{
	gl->makeCurrent();
	glClearColor(.75, .75, 1, 0.0);
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
	GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat lmodel_ambient[] = { 0.1, 0.1, 0.1, 1.0 };
	
	glClearColor(0.8, 0.8, 0.8, 0.0); 

	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular); 
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);							// Enables Depth Testing
	glDepthFunc(GL_LEQUAL);								// The Type Of Depth Testing To Do
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations
	
	glEnable(GL_TEXTURE_2D);

	cams = new double*[6];
	for (int i=0; i<6; ++i)
		cams[i] = new double[9];

	initCams();

	time = 0;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1, 0.1, 100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	// intilize weapon with 3ds
	ak_47 = Model_3DS();
	ak_47.Load("bo2.3DS"); // lsla7 lkle
	wrane = Model_3DS();
	wrane.Load("wrane.3DS"); // yle bydrob lr9a9a yle btt7rk 3l y y3ne rotate :P
	znad = Model_3DS();
	znad.Load("znad 3l 7l.3DS"); // lznad
	mkzof = Model_3DS();
	mkzof.Load("mkzof.3DS"); // lmkzof
	ra9or = Model_3DS();
	ra9or.Load("ra9or.3DS");
	nar = Model_3DS();
	nar.Load("nar.3DS");
	nar2 = Model_3DS();
	nar2.Load("nar 2.3DS");
	nar3 = Model_3DS();
	nar3.Load("nar 3.3DS");
	hrm = Model_3DS();
	hrm.Load("hrm r9a9a.3DS");
	bullet2 = Model_3DS();
	bullet2.Load("bullet2.3DS");
	dafsh = Model_3DS();
	dafsh.Load("dafsh.3DS");
	// kl lsla7 bdon 29
	ak_47_Full = Model_3DS();
	ak_47_Full.Load("Gun AK-47 N120411.3DS");
	cartridge = Model_3DS();
	cartridge.Load("cartridge.3DS");
	target = Model_3DS();
	target.Load("target.3DS");
	wid = 1;

	back = LoadTexture("skybox//back.bmp");			    
	front = LoadTexture("skybox//front.bmp");
	top = LoadTexture("skybox//top.bmp");
	down = LoadTexture("skybox//down.bmp");
	Right = LoadTexture("skybox//right.bmp");
	Left = LoadTexture("skybox//left.bmp");
}

void Engine::initCams(void)
{
	
	cams[0][0] = 0;
	cams[0][1] = 0;
	cams[0][2] = 10;
	cams[0][3] = 0;
	cams[0][4] = 0;
	cams[0][5] = 0;
	cams[0][6] = 0;
	cams[0][7] = 1;
	cams[0][8] = 0;

	cams[1][0] = 0;
	cams[1][1] = 10;
	cams[1][2] = 0;
	cams[1][3] = 0;
	cams[1][4] = 0;
	cams[1][5] = 0;
	cams[1][6] = 1;
	cams[1][7] = 0;
	cams[1][8] = 0;

	cams[2][0] = 0;
	cams[2][1] = 0;
	cams[2][2] = -10;
	cams[2][3] = 0;
	cams[2][4] = 0;
	cams[2][5] = 0;
	cams[2][6] = 0;
	cams[2][7] = 1;
	cams[2][8] = 0;

	cams[3][0] = 0;
	cams[3][1] = 20;
	cams[3][2] = 0;
	cams[3][3] = 0;
	cams[3][4] = 0;
	cams[3][5] = 0;
	cams[3][6] = 0;
	cams[3][7] = 0;
	cams[3][8] = -1;

	cams[4][0] = 10;
	cams[4][1] = 10;
	cams[4][2] = 10;
	cams[4][3] = 0;
	cams[4][4] = 0;
	cams[4][5] = 0;
	cams[4][6] = 0;
	cams[4][7] = 1;
	cams[4][8] = 0;

	cams[5][0] = 0;
	cams[5][1] = 0;
	cams[5][2] = 0;
	cams[5][3] = 1;
	cams[5][4] = 0;
	cams[5][5] = 0;
	cams[5][6] = 0;
	cams[5][7] = 1;
	cams[5][8] = 0;
}

void Engine::update(int n)
{

}

void Engine::swapBuffers(void)
{
	gl->swapBuffers();

}
/*
Vector3 Engine::PointToClient(const Vector3& Source,  const int& x, const int& y)
{
	return Vector3((x - i_WINDOW_WIDTH_OFFSET) * 100 / i_WINDOW_SIZE - Source.x, (100 - (y - i_WINDOW_HEIGHT_OFFSET) * 100 / i_WINDOW_SIZE) - Source.y, 0);
}
*/

void Engine::display(void)
{
	
	glLoadIdentity();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Clear Screen And Depth Buffer
	drawSkyBox();
	gluLookAt(cams[cam][0], cams[cam][1], cams[cam][2], cams[cam][3], cams[cam][4], cams[cam][5], cams[cam][6], cams[cam][7], cams[cam][8]);
	glColor3f(1.0, 0, 0);
	glBegin(GL_LINES);
	glVertex3f(-1000, 0, 0);
	glVertex3f(1000, 0, 0);
	glEnd();

	double X, Y, VX, VY;
	if(!coll && showTarget || !showTarget)
	{
	//shooting 
	double ax = -((p * S * CD / 2)/m) * sqrt(vx*vx + vy*vy) * vx;
	double ay = -g - ((p * S * CD / 2)/m) * sqrt(vx*vx + vy*vy) * vy;

	VX = vx + ax * deltat;
	VY = vy + ay * deltat;		
	
	X = x + vx * deltat + ax * deltat * deltat / 2;
	Y = y + vy * deltat + ay * deltat * deltat / 2;

	//{
	//	glColor3f(1.0, 0, 0);
	//	glBegin(GL_LINES);
	//	//	glVertex2d(x, y);
	//	//	glVertex2d(X, Y);
	//	glEnd();
	//	glFlush();
	//}

	x = X;
	y = Y;
	
	vx = VX;
	vy = VY;

	time += deltat;
	}

	//translations and rotations
	cartridge.pos.x = X;
	cartridge.pos.y = Y;
	cartridge.rot.z = convert(atan(VY / VX), radian, degree);
	//weapon->axis.x = cos(atan(VY/VX));
	//weapon->axis.y = sin(atan(VY/VX));
	//weapon->axis.z = 0;
	//weapon->angle = time * 100000;
	//weapon->Draw();
	
	if(wid==0)
	{
		glPushMatrix();
		ak_47.pos.x = 0;
		ak_47.pos.y = 0;
		ak_47.pos.z=0;

		double _dareb_Z =0;
		double _dareb_X=0;
		double _dareb_Y=0;


		//print values
		if(showDetails)
		{
			printValues(RPM(0), 0, "RPM", "RPM");
			printValues(twist_rate(), 1, "Twist rate", "inches");
		}

		_a-= 0.0045;
		_b+=0.045;
		//_k+=0.00045;
/*		for(int i=1;i<2;i++)
			ak_47.Objects[i].pos.x=10*a;*/  


		// hon l2r2am ll bobo
		// 34 6a8et l8az :D
		//184 hay yle 2fa fra8t lr9a9a m6awle :p
		//185 yle bydrob lr9a9a y3ne yle byflto lznad
		//186 lznad :v
		//187 l barrel
		// 188 lmkzof
		// 189 l ra9or :P lnabed y3ne
		// l3mod lz8er lmayle yle bydfsho tb3 l8az :v
		//glPushMatrix;
		//ak_47.Objects[185].pos.x = -30;




		//3m 76 27ddaseat l263a l7ala :D
		wrane.pos.x = +1.5;
		wrane.pos.y =+1;
		wrane.pos.z = -0.8;
		
		//wrane.rot.y = b;
		if((_b>8)&&(_c<85))
		{
			_c += 0.3;
			wrane.rot.y = _c;
		}
		

		//3m 76 27daseat lznad l7ala
		znad.pos.x =  + 2.37;
		znad.pos.y =+1.2;
		znad.pos.z = -.76;
		if(_b<8.2)
			znad.rot.y = _b;

		// 3m 76 27daseat l mkzof
		mkzof.pos.x =  -4.28;
		mkzof.pos.y =.845;
		mkzof.pos.z =-1.81;
		//mkzof.rot.x = b;
		if(_c>83)
		{
			_d-=0.02;
			mkzof.pos.x = _d;
			mkzof.rot.x = 10*_d;
		}


		//scaled =scaled - 0.0001;
		//ak_47.Objects[186].pos.x = -30;


		//27daseat l ra9or :P
		ra9or.pos.x =  + 5.45;
		ra9or.pos.y =1 ;
		ra9or.pos.z =-2.44 ;
		//ra9or.scale.x = scaled;


		// klshe nar
		nar.visible=false;
		nar.pos.x =  -4.;
		nar.pos.y =.845;
		nar.pos.z =-1.81;
		if((_c>83)&&(_d>-23))
		{
			nar.visible = true;
			_scaledNar= _scaledNar+ 0.001;
			nar.scale.x = _scaledNar;
			//nar.pos.x = -4.28 +0.1*d;
			
			
		}
		if(_d<-23)
		{
			nar.visible = true;
		}

		//klshe nar 2
		nar2.visible = false;
		nar2.pos.x =  -4-10.5;
		nar2.pos.y =.845;
		nar2.pos.z =-1.95;
		if((_d<-15)&&(_d>-18))
		{
			nar2.visible = true;
			_scaledNar2 = _scaledNar2 +0.0075;
			nar2.scale.x = _scaledNar2;
		}

		if(_d<-18)
			nar2.visible = true;

		//klshe nar 3 
		nar3.visible=false;
		nar3.pos.x =  -4-10.2;
		nar3.pos.y =.845;
		nar3.pos.z =-2.82;
		if((_d<-18)&&(_d>-20))
		{
			nar3.visible = true;
			_scaledNar3 = _scaledNar3 + 0.0075;
			nar3.scale.x = _scaledNar3;
		}
		if(_d<-20)
			nar3.visible = true;


		//6a8et l8az :v
		if((_d<-19)&&(_d>-26.5)) // d8t lra9or wl7bashat
		{
			_thrw+=0.1;
			_scaled =_scaled - 0.00065;
			_move6a8et +=0.008;
			ak_47.Objects[34].pos.x = _move6a8et ;
			ak_47.Objects[186].pos.x = _move6a8et;
			ak_47.Objects[184].pos.x = _move6a8et;
			dafsh.pos.x=_move6a8et;
			ra9or.scale.x = _scaled;
			if(_d>-25)
				wrane.rot.y = 89 - 37.8*_move6a8et;
			ak_47.Objects[1].pos.y = _thrw;
			ak_47.Objects[1].rot.y = _thrw;
			ak_47.Objects[1].pos.z = _thrw * 0.7;
			ak_47.Objects[1].rot.z = _thrw*0.7;

		}

		if((_d<-26.5)&&(_d>-34)) // 2rja3 lra9or wl7bashat
		{
			_scaled =_scaled + 0.00065;
			_move6a8et -=0.008;
			ak_47.Objects[34].pos.x = _move6a8et ;
			ak_47.Objects[186].pos.x = _move6a8et;
			ak_47.Objects[184].pos.x = _move6a8et;
			dafsh.pos.x=_move6a8et;
			ra9or.scale.x = _scaled;
		}



		//bullet2
		if(_d>-27.5)
		{
		bullet2.pos.x =  -1.4;
		bullet2.pos.y =.845;
		bullet2.pos.z =-.8;
		}
		if((_d<-27.5)&&(_d>-30.5))
		{
			_axes -=0.008; 
			bullet2.pos.x =-1.4 + _axes;
		}
		if((_d<-29)&&(_d>-30.5))
		{
			_rotation-=0.4;
			bullet2.rot.y=_rotation;
		}
		if((_d<-30.5)&&(_d>-31))
		{
			_axes -=0.008;
			bullet2.pos.x = -1.4 + _axes;
			//bullet2.pos.z= -.8 - axes;
		}
		if((_d<-31)&&(_d>-32.2))
		{
			_hight-=0.006;
			_axes -=0.007;
			bullet2.pos.x= -1.4 + _axes;
			bullet2.pos.z= -.8 + _hight;			

		}

		if((_d<-32.2)&&(_d>-32.9))
		{
			_rotation+=0.9;   //.5
			_hight-=0.01;   //0.008
			_axes-=0.005;
			bullet2.pos.x= -1.4 + _axes;
			bullet2.pos.z=-.8 + _hight;
			bullet2.rot.y=_rotation;

		}
		if((_d<-32.9)&&(_d>-33.9))
		{
			bullet2.pos.z = -.8 + _hight -.25;
		}

		if((_d<-22.34)&&(!played))
		{
			(gcnew System::Media::SoundPlayer("ak47.wav"))->Play();
			played = true;
		}
		


		//dafsh
		dafsh.pos.y = -.2;

		// 25fa2 l nar
		if(_d<-33)
		{
			nar.visible=false;
			nar2.visible = false;
			nar3.visible = false;
		}


		// t7rek kamel lsla7 w 263o b zawey angel :D

		//if(wid==1)
		//{
		//	ak_47_Full.visible = true;
		//	ak_47.visible = false;
		//	wrane.visible = false;
		//	znad.visible = false;
		//	mkzof.visible = false;
		//	ra9or.visible = false;
		//	nar.visible = false;
		//	nar2.visible = false;
		//	nar3.visible = false;
		//	hrm.visible = false;
		//	dafsh.visible = false;
		//	bullet2.visible = false;
		//}




	glPopMatrix();
	//draw
	ak_47.Draw();
	wrane.Draw();
	znad.Draw();
	mkzof.Draw();
	ra9or.Draw();
	nar.Draw();
	nar2.Draw();
	nar3.Draw();
	hrm.Draw();
	dafsh.Draw();
	bullet2.Draw();
	}
	if(wid==1)
	{
		
		if(showTarget)
		{
			target.pos.x = targetx;
			target.Draw();
		}

		ak_47_Full.rot.z = theta;
		ak_47_Full.Draw();

		if(showTarget && (abs(x - targetx)  <= 0.1 || X > targetx)) 
		{
			coll = true;
		}

		if (coll)
		{
			X = cartridge.pos.x = x - 1;
			Y = cartridge.pos.y = y;
			cartridge.rot.z = convert(atan(vy/vx),radian, degree);
		}


		cartridge.Draw();

		if(!played) 
		{
			(gcnew System::Media::SoundPlayer("ak47.wav"))->Play();
			played = true;
		}

		if(showDetails) 
		{
			printValues(X, 0, "X", "feet");
			printValues(Y, 1, "Y", "feet");
			printValues(VX, 2, "Vx", "feet/sec.");
			printValues(VY, 3, "Vy", "feet/sec.");
			printValues(sqrt(vx*vx + vy*vy), 4, "V", "feet/sec.");
			printValues(yaw(time), 5, "Yaw", "degree");
			printValues(pitch(time), 6, "Pitch", "degree");
			printValues(alpha(time), 7, "Alpha", "degree");
		}
	}







	glFlush();




	//system("cls");
	//cout << "Motion variables :\n";
	//cout << "X = " << X << "feet\n";
	//cout << "Y = " << Y << "feet\n";
	//cout << "Vx = " << VX << "fps\n";
	//cout << "Vy = " << VY << "fps\n\n";




}


void Engine::mouseUp(MouseEventArgs^  e)
{



}




void Engine::mouseMove(MouseEventArgs^ e)
{
	//if(e->Button != MouseButtons::None)
	//{
	//	switch(e->Button)
	//	{
	//	case MouseButtons::Left:
	//		cams[cam][0] += (e->X-x)*0.001;
	//		break;
	//	case MouseButtons::Middle:
	//		cams[cam][1] += (e->Y-y)*0.001;
	//		break;
	//	case MouseButtons::Right:
	//		cams[cam][2] -= (e->X-x)*0.001;
	//		break;
	//	}

	//}
}


void Engine::mouseDown(MouseEventArgs^ e)
{
	//x=e->X;
	//y=e->Y;
}

void Engine::mouseClick(MouseEventArgs^ e)
{
	if(e->Button == System::Windows::Forms::MouseButtons::Left)
	{

	}
}

void Engine::mouseScroll(ScrollEventArgs^ e)
{
	if (e->ScrollOrientation == ScrollOrientation::VerticalScroll) cams[cam][2]--;
}

void Engine::previewKeyDown(PreviewKeyDownEventArgs^  e)
{
	if(e->KeyCode >= Keys::NumPad1 && e->KeyCode <= Keys::NumPad6)
	{
		cam = e->KeyValue - 96 - 1;
	}

	if(e->KeyCode == Keys::Left) 
	{
		cams[cam][0] -= 1;
		cams[cam][3] -= 1;
	}
	if(e->KeyCode == Keys::Right) 
	{
		cams[cam][0] += 1;
		cams[cam][3] += 1;
	}
	if(e->KeyCode == Keys::Up) 
	{
		cams[cam][1] += 1;
		cams[cam][4] += 1;
	}
	if(e->KeyCode == Keys::Down)
	{
		cams[cam][1] -= 1;
		cams[cam][4] -= 1;
	}
	if(e->KeyCode == Keys::PageUp)
	{
		cams[cam][2] -= 1;
		cams[cam][5] -= 1;
	}
	if(e->KeyCode == Keys::PageDown)
	{
		cams[cam][2] += 1;
		cams[cam][5] += 1;
	}
	if(e->KeyCode == Keys::NumPad8)
	{
		initCams();
	}
	if(e->KeyCode == Keys::I)
	{
		showDetails = !showDetails;
	}
	if(e->KeyCode == Keys::T)
	{
		showTarget = !showTarget;
	}
}


double Engine::convert(double val, short src, short dest)
	{
		switch (src)
		{
		case radian:
			switch (dest)
			{
			case degree:
				return val * 180 / PI;
				break;

			case radian:
				return val;
				break;

			default:
				return 0;
			}
			break;

		case degree:
			switch (dest)
			{
			case degree:
				return val;
				break;

			case radian:
				return val * PI / 180;
				break;

			default:
				return 0;
			}
			break;

		case meter:
			switch (dest)
			{
			case inch:
				return val * 39.3701;
				break;

			case foot:
				return val * 3.28084;
				break;

			case meter:
				return val;
				break;

			default:
				return 0;
			}
			break;

		case inch:
			switch (dest)
			{
			case inch:
				return val;
				break;

			case foot:
				return val / 12;
				break;

			case meter:
				return val * 0.0254;
				break;

			default:
				return 0;
			}
			break;
		
		case foot:
			switch (dest)
			{
			case inch:
				return val * 12;
				break;

			case foot:
				return val;
				break;

			case meter:
				return val * 0.3048;
				break;

			default:
				return 0;
			}
			break;

		default:
			return 0;
			break;
		}
	}