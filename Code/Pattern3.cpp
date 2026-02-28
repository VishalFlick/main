#include<iostream>


int main()
{
	int n;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	for(int x = 0; x < n; x++)
	{
		for(int y = n; y > x; y--)
		{
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	return 0;
}