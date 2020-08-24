#include <iostream>
#include <string>
#include <fstream>
#include <map>

std::map<char, int> count(std::fstream& input) {	
	std::map<char, int> letters;
	char ch;
	while((ch = input.get()) != EOF)
		if(isalpha(ch)) {
			ch = tolower(ch);
			letters[ch]++;
		}
	return letters;
}

void printMap(std::map<char, int>& letters) {
	for (auto& letter : letters)
 		std::cout << letter.first << " => " << letter.second << std::endl;
}