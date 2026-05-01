#include<iostream>
#include<string>

int main()
{
	std::string ch;

	std::cout<<"Enter a string: ";
	getline(std::cin, ch);

    std::cout<<"String entered by user: "<< ch <<std::endl;

	return 0;
}