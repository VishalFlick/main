
// Check if a number is divisible by 5.

#include<iostream>


int main()
{
	int number;
	std::cout<<"Enter a number: ";
	std::cin>>number;

	if(number % 5 == 0)
	{
		std::cout<< number <<" is divisible by 5"<<std::endl;
	}
	else
	{
		std::cout<< number <<" is not divisible by 5"<<std::endl;
	}

	return 0;
}