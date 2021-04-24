#include <iostream>
#include <string>


int main()
{
	std::string name;// user name
	std::getline(std::cin, name); // read user's name!!!!
	std::cout << "Hello world " << name;
	return 0;
}
