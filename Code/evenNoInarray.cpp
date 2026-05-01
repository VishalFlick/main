#include<iostream>

int main()
{
	int arr[] = {12,8,15,6,2,9,1};
	int arrsize = 0;
	arrsize = sizeof(arr)/sizeof(arr[0]);

    std::cout<<"Length of array is: "<<arrsize<<std::endl;

    for(int i = 0; i < arrsize; i++)
    {
    	if(arr[i] % 2 == 0)
    	{
    		std::cout<<arr[i]<<" ";
    	}

    }

	return 0;
}