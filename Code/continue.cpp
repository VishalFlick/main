#include<iostream>


int main()
{
	for(int i = 1; i <= 5; i++)
	{
		if(i == 4)
		{
			continue;
		}
		std::cout<<i<<std::endl;
	}
}