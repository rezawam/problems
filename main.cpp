#include <iostream>
#include <fstream>
#include <map>
#include "count.h"


int main() {
	std::fstream input;

	input.open("input.txt");
	std::map<char, int> letters = count(input);
	printMap(letters);
	input.close();
	return 0;
}