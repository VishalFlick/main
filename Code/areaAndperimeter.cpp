// Area = L * B
// Perimeter = 2(L+B)
#include<iostream>


int main()
{
	int length, breadth;
	int area, perimeter;
	std::cout<<"Enter length: "<<std::endl;
	std::cin>>length;
	std::cout<<"Enter breadth: "<<std::endl;
	std::cin>>breadth;

	area = length * breadth;
	perimeter = 2 * (length + breadth);

	std::cout<<"Area: "<< area<<std::endl;
	std::cout<<"Perimeter: "<< perimeter <<std::endl;

	return 0;
}