#ifndef _PHYSICS_CORE_H_
#define _PHYSICS_CORE_H_
#include <cmath>
#include "macros.h"

namespace physics
{
	class Vector3
    {
    public:
        real x, y, z;
		
        Vector3() : x(0), y(0), z(0) {}
        Vector3(const real x, const real y, const real z) : x(x), y(y), z(z) {}
		void setScaledVector(const Vector3& vector, const real scale)
		{
			x = vector.x * scale;
			y = vector.y * scale;
			z = vector.z * scale;
		}
		void setScaledVector(const real x, const real y, const real z, const real scale)
		{
			Vector3::x = x * scale;
			Vector3::y = y * scale;
			Vector3::z = z * scale;
		}
        void operator +=(const Vector3& v)
        {
            x += v.x;
            y += v.y;
            z += v.z;
        }
        Vector3 operator +(const Vector3& v) const
        {
            return Vector3(x + v.x, y + v.y, z + v.z);
        }
        void operator-=(const Vector3& v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;
        }
        Vector3 operator -(const Vector3& v) const
        {
            return Vector3(x - v.x, y - v.y, z - v.z);
        }
        void operator *=(const real value)
        {
            x *= value;
            y *= value;
            z *= value;
        }
        Vector3 operator*(const real value) const
        {
            return Vector3(x * value, y * value, z * value);
        }
        Vector3 componentProduct(const Vector3 &vector) const
        {
            return Vector3(x * vector.x, y * vector.y, z * vector.z);
        }
        void componentProductUpdate(const Vector3 &vector)
        {
            x *= vector.x;
            y *= vector.y;
            z *= vector.z;
        }
        Vector3 vectorProduct(const Vector3 &vector) const
        {
            return Vector3(y * vector.z - z * vector.y, z * vector.x - x * vector.z, x * vector.y - y * vector.x);
        }
        void operator %=(const Vector3 &vector)
        {
            *this = vectorProduct(vector);
        }
        Vector3 operator %(const Vector3 &vector) const
        {
            return Vector3(y * vector.z - z * vector.y, z * vector.x - x * vector.z, x * vector.y - y * vector.x);
        }
        real scalarProduct(const Vector3 &vector) const
        {
            return x * vector.x + y * vector.y + z * vector.z;
        }
        real operator *(const Vector3 &vector) const
        {
            return x * vector.x + y * vector.y + z * vector.z;
        }
        void addScaledVector(const Vector3& vector, real scale)
        {
            x += vector.x * scale;
            y += vector.y * scale;
            z += vector.z * scale;
        }
        real magnitude() const
        {
            return real_sqrt(x*x + y*y + z*z);
        }
        real squareMagnitude(void) const
        {
            return x*x + y*y + z*z;
        }
        void normalise(void)
        {
            real m = magnitude();
            if (m > 0) (*this) *= real(1) / m;
		}
        Vector3 unit(void) const
        {
            real m = magnitude();
			if (m > 0) return Vector3(x / m, y / m, z / m);
        }
        void clear(void)
        {
            x = y = z = 0;
        }
        void invert(void)
        {
            x = -x;
            y = -y;
            z = -z;
        }
	
	#if physics_VECTOR_PAD
	private:
			real pad;
	#endif
    };

	

}

#endif