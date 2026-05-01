#include<iostream>

int EvenOrOdd(int);

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;

	EvenOrOdd(num);

	return 0;
}

int EvenOrOdd(int x)
{
	if(x % 2 == 0)
	{
		std::cout<<"Even"<<std::endl;
	}
	else
	{
		std::cout<<"Odd"<<std::endl;
	}
}