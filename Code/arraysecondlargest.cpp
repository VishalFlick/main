#include<iostream>
#include <climits>  // for INT_MIN


int main()
{
	int arr[] = {12,8,15,6,2,9,1};
	int arrsize = sizeof(arr) / sizeof(arr[0]);

    std::cout<<"Length of array is: "<<arrsize<<std::endl;

    int largest = arr[0]; 
    int second = INT_MIN;

    	for(int i = 0; i < arrsize; i++)
        {
    	    if(arr[i] > largest)
    	    {
    	     	second = largest;
    	    	largest = arr[i];
    	    }
    	    else if(arr[i] > second && arr[i] != largest)
    	    {
    	    	second = arr[i];
    	    }
        }
        std::cout<<"Second largest in array is: "<<second<<std::endl;

	return 0;
}