#include<iostream>
#include<string>

int main()
{
	std::string var1;

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

	for(int i = var1.size(); i >= 0; i--)
	{
		std::cout<< var1[i]<<" ";
	}


	return 0;
}