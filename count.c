#include <stdio.h>
#include <ctype.h> 

int * count(FILE *input) 
{
	static int letters[26] = {0};
	char c;

	while (fscanf(input, "%c", &c) != EOF) {
		if (isalpha(c)) {
			c = tolower(c);
			letters[c - 'a']++;
		}
	}
	return letters;
}

void printArray(int *arr) 
{
	for(int i = 0; i < 26; i++) 
		if (arr[i])
			printf("%c => %d\n", i + 'a', arr[i]);
}