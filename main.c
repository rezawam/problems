#include <stdio.h>
#include <math.h>

typedef struct Point {
	double x, y;
} Point;

int main() {
	Point A = {0}, B = {0}, C = {0}; // BC is a line segment
	scanf("%d %d %d %d %d %d", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
	
	printf("Line is %fX + %fY + %f\n", C.y-B.y, B.x-C.x, B.y*C.x-B.x*C.y);
}