#include<iostream>
#include<string>

int main()
{
	std::string var1 = "", var2 = "";

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

	std::cout<<"Enter a another string: ";
	getline(std::cin, var2);

	if(var1.compare(var2) == 0)
	{
		std::cout<<"Both the string are sane"<<std::endl;
	}
	else
	{
		std::cout<<"Not same"<<std::endl;
	}

	return 0;
}