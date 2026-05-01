#include<iostream>

int main()
{
	int arr[5];

    for(int i = 0; i < 5; i++)
    {
    	std::cout<<"Enter value on index "<< i <<": ";
	    std::cin>>arr[i];
    }

    int largest = arr[0];
    int idxno = 1;

    for(int i = 1; i < 5; i++)
    {
    	if(arr[i] > arr[0])
    	{
    		largest = arr[i];
    		idxno = i;
    	}
    }

    std::cout<<"Largest value in array on "<<idxno<<" index is: "<< largest <<std::endl;

	return 0;
}