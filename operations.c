#include <stdio.h>
#include "operations.h"

Vector add(const Vector A, const Vector B) {
	Vector res = {A.x + B.x, A.y + B.y, A.z + B.z};
	return res;
}

Vector sub(const Vector A, const Vector B) {
	Vector res = {A.x - B.x, A.y - B.y, A.z - B.z};
	return res;
}

int dotProd(const Vector A, const Vector B) {
	int res = A.x * B.x + A.y * B.y + A.z * B.z;
	return res;
}

Vector crossProd(const Vector A, const Vector B) {
	Vector res = {0};
	res.x = A.y * B.z - B.y * A.z;
	res.y = A.z * B.x - B.z * A.x;
	res.z = A.x * B.y - B.x * A.y;
	return res;
}