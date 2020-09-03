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
	double res = 0;
	scanf("%lf %lf %lf %lf %lf %lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
	Line BC = {C.y-B.y, B.x-C.x, B.y*C.x-B.x*C.y};
	Line AK = {B.x-C.x, -C.y+B.y, (-B.x+C.x)*A.x + (C.y-B.y)*A.y};
	printf("Line BC is %fx + %fy + %f = 0\n", BC.A, BC.B, BC.C);
	printf("Line AK is %fx + %fy + %f = 0\n", AK.A, AK.B, AK.C);
	double determinant = BC.A*AK.B - AK.A*BC.B;
	K.x = (BC.B*AK.C - BC.C*AK.B)/determinant;
       	K.y = (BC.C*AK.A - BC.A*AK.C)/determinant;
	printf("K is (%f; %f)\n", K.x, K.y);
	double dist = sqrt(pow(K.x-B.x,2)+pow(K.y-B.y,2)) + sqrt(pow(K.x-C.x,2)+pow(K.y-C.y,2));
	double segment = sqrt(pow(C.x-B.x,2)+pow(C.y-B.y,2));  
	if (dist == segment) {
		printf("1 %f\n", segment);
		res = sqrt(pow(A.x-K.x,2)+pow(A.y-K.y,2)); 
	} else {
		printf("0 %f %f\n", dist, segment);
		res = fmax(sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2)), sqrt(pow(A.x-C.x,2)+pow(A.y-C.y,2)));
	}
	printf("Res: %f/n", res);
}   	

