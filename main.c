#include <stdio.h>
#include "count.h"

int main() 
{

	FILE  *input;
	int   *letters;

	input = fopen("input.txt", "r");

	letters = count(input);
	printArray(letters);

	fclose(input);

	return 0;

}
