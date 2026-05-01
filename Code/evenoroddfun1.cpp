#include<iostream>

int EvenOrOdd(int);

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;

	int result = EvenOrOdd(num);

	if(result == 1)
		std::cout<< "Even" <<std::endl;
    else
    	std::cout<< "Odd" <<std::endl;
    
	return 0;
}

int EvenOrOdd(int x)
{
	if(x % 2 == 0)
		return 1;
	else
		return 0;
}