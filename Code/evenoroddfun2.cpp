#include<iostream>

bool isEven(int);

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;


	if(isEven(num))
		std::cout<< "Even" <<std::endl;
    else
    	std::cout<< "Odd" <<std::endl;

	return 0;
}

bool isEven(int x)
{
	return (x % 2 == 0);
}