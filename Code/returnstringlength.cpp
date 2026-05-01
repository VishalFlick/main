#include<iostream>
#include<string>

int main()
{
	std::string ch;

	std::cout<<"Enter a string: ";
	getline(std::cin, ch);

	std::cout<< ch.length();

	return 0;
}