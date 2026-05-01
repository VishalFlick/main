
// Take two numbers and print the larger one.


#include<iostream>


int main()
{
	int a, b;
	std::cout<<"Enter number a: ";
	std::cin>>a;
	std::cout<<"Enter number b: ";
	std::cin>>b;


	if(a > b)
	{
		std::cout<< a <<" is larger"<<std::endl;
	}
	else if(b > a)
	{
		std::cout<< b <<" is larger"<<std::endl;
	}
    else
	{
		std::cout<<"Both number is equal"<<std::endl;
	}

	return 0;
}