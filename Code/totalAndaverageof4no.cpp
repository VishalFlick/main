#include<iostream>


int main()
{
	int a, b, c, d;
	int total, average;
	std::cout<<"Enter value of a: "<<std::endl;
	std::cin>>a;
	std::cout<<"Enter value of b: "<<std::endl;
	std::cin>>b;
	std::cout<<"Enter value of c: "<<std::endl;
	std::cin>>c;
	std::cout<<"Enter value of d: "<<std::endl;
	std::cin>>d;

	total = a + b + c + d;
	average = (a + b + c + d) / 4;

	std::cout<<"Total of four number: "<< total <<std::endl;
	std::cout<<"Average of four number: "<< average;


	return 0;
}