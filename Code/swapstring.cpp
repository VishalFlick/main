#include<iostream>
#include<string>

int main()
{
	std::string var1, var2,  temp;

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

	std::cout<<"Enter a another string: ";
	getline(std::cin, var2);


	temp = var1;
	var1 = var2;
	var2 =  temp;

	std::cout<<"String var1: "<< var1 <<std::endl;
	std::cout<<"String var2: "<< var2 <<std::endl;

	return 0;
}