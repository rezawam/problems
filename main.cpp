#include <iostream>
#include <map>
#include <string>


int main() 
{
	std::string input = "";
	char res = 0;
	int rate = 0;
	std::map<int,std::string> hired, unknown;

	while (1) 
	{
		std::cin >> input;
		if (input == "KUSHAT_NECHEGO")
			break;
		else if (input == "SOBES") 
		{
			std::cin >> res;
			if (res == '+') 
				hired.insert(std::pair<int,std::string>(unknown.rbegin()->first, unknown.rbegin()->second));
			unknown.erase(unknown.rbegin()->first);
		} 
		else 
		{
			std::cin >> rate;
			unknown.insert(std::pair<int,std::string>(rate, input));
		}
	}

	if (!hired.empty())
		std::cout << hired.rbegin()->second << std::endl;
	else
		std::cout << "GOLODAEM_DALSHE" << std::endl;
	return 0;
}