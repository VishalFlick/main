#include<iostream>
#include<string>

int main()
{
	std::string var1, var2, var3;

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

	std::cout<<"Enter a string to find: ";
	getline(std::cin, var2);

	std::cout<<"Enter a string to replace: ";
	getline(std::cin, var3);


	while(var1.find(var2) != std::string::npos)
		var1.replace(var1.find(var2), var2.size(), var3);

	std::cout<<var1;

	return 0;
}