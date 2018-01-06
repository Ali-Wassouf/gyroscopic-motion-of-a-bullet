#ifndef _PHYSICS_MACROS_H_
#define _PHYSICS_MACROS_H_

#define radian 0
#define degree 1
#define meter 2
#define inch 3
#define foot 4

namespace physics
{
	/********
	real precision:
	0: float
	1: double
	********/
	#define physics_PRECISION 1

	//Vector padding
	#define physics_VECTOR_PAD 1
	
	//setting precision
	#if physics_PRECISION
		typedef double real;
		#define REAL_MAX 1.7976931348623158e+308
		#define real_sqrt sqrt
		#define real_abs fabs
		#define real_sin sin
		#define real_cos cos
		#define real_exp exp
		#define real_pow pow
		#define real_atan atan
		#define PI 3.14159265358979
	#else
		typedef float real;
		#define REAL_MAX 3.402823466e+38F
		#define real_sqrt sqrtf
		#define real_abs fabsf
		#define real_sin sinf
		#define real_cos cosf
		#define real_exp expf
		#define real_pow powf
		#define real_atan atanf
		#define PI 3.14159f
	#endif

	static const real physics_SECOND = 20;
	static const real physics_SECOND_INVERSE = real(1) / physics_SECOND;
	static const real physics_SECOND_SQUARE = physics_SECOND * physics_SECOND;
}
#endif