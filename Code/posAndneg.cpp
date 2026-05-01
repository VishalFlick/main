
// Take a number and print whether it’s positive, negative, or zero. 

#include<iostream>


int main()
{
	int number;
	std::cout<<"Enter a number: ";
	std::cin>>number;

	if(number > 0)
	{
		std::cout<<"Positive"<<std::endl;
	}
	else if(number < 0)
	{
		std::cout<<"Negative"<<std::endl;
	}
	else
	{
		std::cout<<"Zero"<<std::endl;
	}


	return 0;
}