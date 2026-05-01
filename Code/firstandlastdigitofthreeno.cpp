#include<iostream>


int main()
{
	int num;
	int firstdigit, lastdigit;
	int middledigit, middledigit2;
	std::cout<<"Enter a number: "<<std::endl;
	std::cin>>num;

	firstdigit = num / 100;
	middledigit = (num / 10) % 10;
	lastdigit = num % 10;
	middledigit2 = (num % 100) / 10;

    std::cout<<"Firstdigit: "<<firstdigit<<std::endl;
    std::cout<<"Middledigit: "<<middledigit<<std::endl;
    std::cout<<"Lastdigit: "<<lastdigit<<std::endl;
    std::cout<<"Middledigit2: "<<middledigit2<<std::endl;

	return 0;
}