
// Check if a number is even or odd. 

#include<iostream>


int main()
{
	int number;
	std::cout<<"Enter a number: ";
	std::cin>>number;

	if(number % 2 == 0)
	{
		std::cout<< number <<" is Even"<<std::endl;
	}
	else
	{
		std::cout<< number <<" is Odd"<<std::endl;
	}

	return 0;
}