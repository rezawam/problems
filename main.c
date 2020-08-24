#include <stdio.h>
#include "operations.h"

int main() {
	Vector A = {0}, B = {0}, C = {0};
	char operator = 0;
	scanf("%d %d %d", &A.x, &A.y, &A.z);
	scanf("%d %d %d\n", &B.x, &B.y, &B.z);
	scanf("%c", &operator);

	switch(operator) 
	{
		case '+':
			C = add(A, B);
			printf("%d %d %d\n", C.x, C.y, C.z);
			break;
		case '-':
			C = sub(A, B);
			printf("%d %d %d\n", C.x, C.y, C.z);
			break;
		case '*':
			{
			int res = dotProd(A, B);
			printf("%d\n", res);
			break;
			}
		case 'x':
			C = crossProd(A, B);
			printf("%d %d %d\n", C.x, C.y, C.z);
			break;
		default:
			printf("enter operator you retard\n");
	}
	return 0;
}	