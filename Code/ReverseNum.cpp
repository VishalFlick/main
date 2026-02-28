#include<iostream>


int main()
{
	int n;
	int revNum = 0;
	std::cout<<"Enter a Number: "<<"\n";
	std::cin>>n;

	while(n > 0)
	{
		int lastdigit = n % 10;
		n = n / 10;
		revNum = (revNum * 10) + lastdigit;
	}
	std::cout<<"Reverse Number: "<<revNum;

	return 0;
}