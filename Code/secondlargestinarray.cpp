#include<iostream>

int main()
{
	int arr[] = {12,8,15,6,2,9,1};
	int arrsize = sizeof(arr) / sizeof(arr[0]);

    std::cout<<"Length of array is: "<<arrsize<<std::endl;

    for(int j = 0; j < arrsize; j++)
    {
    	for(int i = 0; i < arrsize - 1; i++)
        {
    	    if(arr[i] < arr[i + 1])
    	    {
    		    int temp = 0;
    		    temp = arr[i];
    		    arr[i] = arr[i + 1];
    		    arr[i + 1] = temp;
    	    }
        }
    }
    std::cout<<"Second largest in array is: "<<arr[1]<<std::endl;

	return 0;
}