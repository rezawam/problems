#include <stdio.h>
#include <stdexcept>
#include "Vector.h"

int main() 
{
	char operation = 0;
	Vector a(0, 0, 0), b(0, 0, 0);

	scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
	scanf(" %c", &operation);
	if (operation != '|' && operation != '%')
		scanf(" %lf %lf %lf", &b.x, &b.y, &b.z);

	switch(operation) 
	{
		case '+':
		{
			Vector c = a+b;
			printf("%f %f %f\n", c.x, c.y, c.z);
			break;
		}
		case '-':
		{
			Vector c = a-b;
			printf("%f %f %f\n", c.x, c.y, c.z);
			break;
		}
		case '^':
		{
			Vector c = a^b;
			printf("%f %f %f\n", c.x, c.y, c.z);
			break;
		}	
		case '*':
		{
			double dot = a*b;
			printf("%f\n", dot);
			break;
		}
		case '|': // length of a
		{
			double len = a.len();
			printf("%f\n", len);
			break;
		}
		case '%': //normalized a
		{
			try 
			{
				Vector c = a.normalize();
				printf("%f %f %f\n", c.x, c.y, c.z);

			}
			catch (const std::exception &ex) 
			{
				printf("Error: %s\n", ex.what());
			}
			break;
		}
		default:
			printf("enter operator you retard\n");
	}
	return 0;
}