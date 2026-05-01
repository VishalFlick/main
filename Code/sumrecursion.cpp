#include<iostream>

int mySum(int);

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;

	int result = mySum(num);
	std::cout<<"Sum is: "<< result <<std::endl;

	return 0;
}

int mySum(int num)
{
	//if(num == 0)
	//	return 0;

	//return num + mySum(num - 1);

    if(num > 0)
	{
		return (num + mySum(num - 1));
	}
	else
		return 0;
}