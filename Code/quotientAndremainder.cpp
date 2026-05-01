#include<iostream>


int main()
{
	int divisor, dividend;
	int quotient, remainder;

	std::cout<<"Enter divisor: "<<std::endl;
	std::cin>>divisor;
	std::cout<<"Enter dividend: "<<std::endl;
	std::cin>>dividend;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	std::cout<<"Quotient: "<< quotient <<std::endl;
	std::cout<<"Remainder: "<< remainder <<std::endl;


	return 0;
}