#include <stdio.h>
#include <math.h>

typedef struct Point {
	double x, y;
} Point;

typedef struct Line {
	double A, B, C; // Ax+By+C=0
} Line;

int main() {
	Point A = {0}, B = {0}, C = {0}, K = {0}; // BC is a line segment, K is a point of intersect. 
	scanf("%lf %lf %lf %lf %lf %lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
	Line BC = {C.y-B.y, B.x-C.x, B.y*C.x-B.x*C.y};
	Line AK = {B.x-C.x, -C.y+B.y, (-B.x+C.x)*A.x + (C.y-B.y)*A.y};
	printf("Line BC is %fx + %fy + %f\n", BC.A, BC.B, BC.C);
	printf("Line AK is %fx + %fy + %f\n", AK.A, AK.B, AK.C);
	double determinant = BC.A*AK.B - AK.A*BC.B;
	K.x = (BC.C*AK.B - BC.B*AK.C)/determinant;
       	K.y = (BC.A*AK.C - BC.C*AK.A)/determinant;
	printf("K is (%fx; %fy)\n", K.x, K.y);
    }	

