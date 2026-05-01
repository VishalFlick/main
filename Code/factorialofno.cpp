#include<iostream>


int main()
{
	int n;
	int factorial = 1;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	for(int i = n; i > 0; i--)
	{
		factorial = factorial * i;
	}
	std::cout<<"Factorial of the number is: "<<factorial;

}