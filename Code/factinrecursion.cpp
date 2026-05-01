#include<iostream>

int myRecursion(int);

int main()
{
	int num;
	std::cout<<"Enter a number: ";
	std::cin>>num;

	int result = myRecursion(num);
    std::cout<<"Factorial of "<< num <<" is: "<<result<<std::endl;

	return 0;
}

int myRecursion(int num)
{
	if(num < 0)
        return -1;
    
    if(num == 0 || num == 1)
        return 1;    // Factorial is not defined for negative numbers

		return (num * myRecursion(num - 1));
}