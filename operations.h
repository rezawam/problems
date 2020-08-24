#pragma once

typedef struct Vector {
	int x, y, z;
} Vector;

Vector add(const Vector A, const Vector B);
Vector sub(const Vector A, const Vector B);
int dotProd(const Vector A, const Vector B);
Vector crossProd(const Vector A, const Vector B);