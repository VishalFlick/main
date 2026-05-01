#include<iostream>
#include<string>

int main()
{
	std::string name[] = {"John", "Hana", "Steve"};
	name[1] = "Babita";

	for(int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
	{
		std::cout<<name[i]<<" ";
	}
}