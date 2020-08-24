#include <cmath>
#include <stdexcept>
#include "Vector.h"

Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}

Vector Vector::operator + (const Vector &b) {
	return Vector(x+b.x, y+b.y, z+b.z);
}

Vector Vector::operator - (const Vector &b) {
	return Vector(x-b.x, y-b.y, z-b.z);
}

Vector Vector::operator ^ (const Vector &b) {
	return Vector(y*b.z-b.y*z, z*b.x-b.z*x, x*b.y-b.x*y);
}

double Vector::operator * (const Vector &b) {
	return x*b.x + y*b.y + z*b.z;
}

Vector Vector::normalize() {
	if (len() == 0)
		throw std::logic_error("zero vector can't be normalized");
	double inln = 1/len();
	return Vector(x*inln, y*inln, z*inln);
}

double Vector::len() {
	return sqrt(x*x + y*y + z*z);
}