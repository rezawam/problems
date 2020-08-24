#pragma once

class Vector 
{
public:
	double x, y, z;
	Vector(double x, double y, double z);

	Vector operator + (const Vector &b);
	Vector operator - (const Vector &b);
	Vector operator ^ (const Vector &b);
	double operator * (const Vector &b);
	Vector normalize();
	double len();
};