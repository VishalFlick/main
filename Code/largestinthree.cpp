
// Take three numbers and print the largest.

#include<iostream>

#include <algorithm>



int main()
{
	int a, b, c;
	std::cout<<"Enter number a: ";
	std::cin>>a;
	std::cout<<"Enter number b: ";
	std::cin>>b;
	std::cout<<"Enter number c: ";
	std::cin>>c;

    int largest = std::max({a, b, c});
    std::cout << largest << " is largest";

/*
	if(a > b && a > c)
	{
		std::cout<< a <<" is largest"<<std::endl;
	}
	else if(b > a && b > c)
	{
		std::cout<< b <<" is largest"<<std::endl;
	}
	else
	{
		std::cout<< c <<" is largest"<<std::endl;
	}

    if(a >= b)
    {
        if(a >= c)
            std::cout<< a <<" is largest";
        else
            std::cout<< c <<" is largest";
    }
    else
    {
        if(b >= c)
            std::cout<< b <<" is largest";
        else
            std::cout<< c <<" is largest";
    }
*/
	return 0;
}
