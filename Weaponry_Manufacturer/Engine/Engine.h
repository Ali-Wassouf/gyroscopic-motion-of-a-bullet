#pragma once
#include <stdlib.h>
#include "Physics\core.h"
#include "OpenGL\OpenGL.h"
#include "3DS\Model_3DS.h"
#include <String>
#include <sstream>
#include "OpenGL\texture.h"

using namespace std;
using namespace physics;
using namespace System::Windows::Forms;

ref class Engine
{
public:
	Engine(System::IntPtr handle);
	void init(void);
	void display(void);
	void mouseClick(MouseEventArgs^ e);
	void mouseMove(MouseEventArgs^ e);
	void mouseDown(MouseEventArgs^ e);
	void mouseUp(MouseEventArgs^  e);
	void mouseScroll(ScrollEventArgs^ e);
	void previewKeyDown(PreviewKeyDownEventArgs^  e);
	void update(int n);
	void swapBuffers(void);
	
	double **cams;
	short cam;
	int wid;
//private:
	OpenGL^ gl;

	double CD;			// Co-efficient of drag.
	double d;			// Caliber
	double S;			// Cross-sectional area
	double p;			// Dinsity

	double CLa;			// Lift Co-efficient
	double CMa;			// Co-Ffficient of moment
	double Delta0;		// Size of nutation
	double Gamma0;		// Size of apparent wind offset

	double m;			// Mass of bullet
	double Ix;			// Moment of inertia of the bullet about its spin-axis
	double Iy;			// Moment of inertia of the bullet about a cross-axis
	double l;			// Length of cartridge
	//double C;			// Constant of velocity
	double SG;			// Specific gravity of bullet
	double F1;			// Inertial frequency of gyroscopic nutation, fast-mode 
	double W1;			// Circular inertial frequency of gyroscopic nutation, fast-mode
	double theta;
	double x;
	double y;
	double vx;
	double vy;
	double mv;
	double g;
	double deltat;
	double targetx;
	double time;

	bool played;

	void initCams(void);
	void printValues(double d,int i,string s, string unit);
	void initShooting()
	{
		time = 0;
		x = 0; 
		y = 0;
		vx = mv * cos(convert(theta, degree, radian));
		vy = mv * sin(convert(theta, degree, radian));
		played = false;
	}

	void setTargetx(double val)
	{
		targetx = val;
	}

	void setdeltat(double milliseconds)
	{
		deltat = milliseconds / 1000;
	}

	void setg(double val)
	{
		g = val;
	}

	void setv(double velocity, double angle)
	{
		theta = angle;
		mv = velocity;
		vx = velocity * cos(convert(theta, degree, radian));
		vy = velocity * sin(convert(theta, degree, radian));
	}

	void setSG(double val)
	{
		SG = val;
	}

	void setl(double val)
	{
		l = val;
	}

	void setIy(double val)
	{
		Iy = val;
	}

	void setIx(double val)
	{
		Ix = val;
	}

	void setCMa(double val)
	{
		CMa = val;
	}

	void setCLa(double val)
	{
		CLa = val;
	}

	void setCD(double val)
	{
		CD = val;
	}

	void setDelta0(double val)
	{
		Delta0 = val;
	}

	void setGamma0(double val)
	{
		Gamma0 = val;
	}

	void setm(double val)
	{
		m = val;
	}

	void setp(double val)
	{
		p = val;
	}

	void setd(double val)
	{
		d = val;
		S = PI * d * d / 4;
	}

	void setF1(double freq)
	{
		F1 = freq;
		W1 = 2 * PI * freq;
	}

	/*
	C	Constant of velocity
	*/
	double C(double v)
	{
		return (v  <= 2800) ? 150 : 180 ;
	}

	/*
	Fd = q * s * Cd		Drag force
	q	Dynamic pressure
	*/
	double Fd(double q)
	{
		return q * S * CD;
	}

	/*
	Fl = q * s * CLAlpha * sin(Alpha)		Lift force
	q		Dynamic pressure
	Alpha	Angle of attack
	*/
	double Fl(double t)
	{
		return q(v(t)) * S * CLa * sin(convert(alpha(t), degree, radian));
	}
	
	/*
	E1 = W1 * t - pi / 2	Roll orientation of fast-mode
	*/
	double E1(double t)
	{
		return W1 * t - PI / 2;
	}


	double W(double t)
	{
		return 2 * PI * RPM(t) / 60;
	}

	/*
	L = Ix * W(t)	Angular momentum of spinning bullet about its spin-axis
	*/
	double L(double t)
	{
		return Ix * W(t);
	}


	// Velocity (instide the weapon, constant)
	double accelaration_gravity;

	double v(double t)
	{
		return convert(820, meter, foot);
	}

	/*
	q(t) = p * v(t)^2 / 2		Dynamic pressure
	*/
	double q(double t)
	{
		double vel = v(t);
		return (p * vel * vel / 2);
	}

	// Inertial frequency of gyroscopic precession, slow-mode 
	double F2(double t)
	{
		return F1 / 4.79;
	//	return 311;
		return (q(v(t)) * d * S * CMa / (L(t) * 2 * PI));
	}

	// Circular inertial frequency of gyroscopic precession, slow-mode
	double W2(double t)
	{
		return (2 * PI * F2(t));
	}

		
	/*
	E2 = W2 * t + pi / 2	Roll orientation of fast-mode
	*/
	double E2(double t)
	{
		return (W2(t) * t + PI / 2);
	}

	/*
	Fr = -m * W2 * W2 * r	Restoring force
	*/
	double Fr(double t)
	{
		double w2 = W2(t);
		return -m *w2 * w2 * r(t);
	}

	/*
	Force. of coning
	*/
	double Fc(double t)
	{
		return -1 * q(t) * S * sin(convert(alpha(t), degree, radian)) * (CLa + CD);
	}

	/*
	pitch = (Gamma0 + Delta0) * rcos(E2(t)) + Delta0 * cos(E1(t))	Pitch of bullet
	*/
	double pitch(double t)
	{
		return (Gamma0 + Delta0) * cos(E2(t)) + Delta0 * cos(E1(t));
	}
	
	/*
	yaw = -Gamma0 + (Gamma0 + Delta0) * sin(E2(t)) + Delta0 * sin(E1(t))
	*/
	double yaw(double t)
	{
		double k = E2(t);
		return -Gamma0 + (Gamma0 + Delta0) * sin(E2(t)) + Delta0 * sin(E1(t));
	}

	/*
	Alpha = atan(yaw(t) / pitch(t))		Angle of attack
	*/
	double alpha(double t)
	{
		return convert(acos(cos(convert(yaw(t), degree, radian) * cos(convert(pitch(t), degree, radian)))), radian, degree);
	}

	static double convert(double val, short src, short dest);

	/*
	Revolution Per Second
	*/
	double RPM(double t)
	{
		return v(0) * 12 * 60 / twist_rate();
	}

	/*
	Twist Rate
	*/
	double twist_rate()
	{
		return 12;
		return (C(v(0)) * convert(d, foot, inch) * convert(d, foot, inch) / l) * sqrt(SG / 10.9) ;
	}


	double r(double t)
	{
		return sin(convert(alpha(t), degree, radian)) * D(t);
	}

	/*

	*/
	double D(double t)
	{
		double w2 = W2(t);
		return q(v(t)) * S * (CLa + CD) / (m * w2 * w2);
	}


	//double ax(double t, double angle)
	//{
	//	return -Fd(q(t)) * cos(angle) / m;
	//}

	//double ay(double t, double angle)
	//{
	//	return -(Fd(q(t)) * sin(angle) / m) - 9.8;
	//}

	

	//point relative to particle posi.
//	Vector3 PointToClient(const Vector3& Source,  const int& x, const int& y);


};

