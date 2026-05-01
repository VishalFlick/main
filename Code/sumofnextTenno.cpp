#include<iostream>


int main()
{
	int n;
	int i = 1, sum = 0;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	while(i <= 10)
	{
		n++;
		sum = sum + n;
		i++;
	}
	std::cout<<"Sum of next 10 number is: "<<sum;

}