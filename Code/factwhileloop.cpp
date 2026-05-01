#include<iostream>


int main()
{
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
	long long factorial = 1;
	
	

	while(n > 0)
	{
		factorial = factorial * n;
        n--;
	}
	std::cout<<"Factorial of the number is: "<<factorial;

}