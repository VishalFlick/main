#include<iostream>

int main()
{
	int x = 42;
	int &xref = x;
	int *xp = &x;

	std::cout<<"Value of x: "<< x << "\n";
	std::cout<<"Pointer value of xp: "<< *xp <<"\n";
	std::cout<<"Address of xp: "<< xp <<"\n";
	std::cout<<"Value of xref: "<<xref <<"\n";
	std::cout<<"Address of xref: "<< &xref <<"\n";

	return 0;
}