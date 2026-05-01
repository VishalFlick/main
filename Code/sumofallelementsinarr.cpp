#include<iostream>

int main()
{
	int arr[5];
	int sum = 0;

    for(int i = 0; i < 5; i++)
    {
    	std::cout<<"Enter value on index "<< i <<": ";
	    std::cin>>arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
    	sum = sum + arr[i];
    }

    std::cout<<"Sum of all the elements in Array is: "<< sum <<std::endl;

	return 0;
}