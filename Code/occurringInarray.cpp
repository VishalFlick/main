#include<iostream>

int main()
{
	int arr[] = {12,8,15,6,2,9,1,1,2,8,9,3,9,9,8,8,8};
	int maxOcc = 0, maxcount = 0;
	int arrsize = sizeof(arr) / sizeof(arr[0]);

    std::cout<<"Length of array is: "<<arrsize<<std::endl;

    for(int i = 0; i < arrsize; i++)
    {
        int count = 1;
    	for(int j = i + 1; j < arrsize; j++)
    	{
    		if(arr[i] == arr[j])
    		{
    			count++;
    		}
    	}
    	if(count > maxcount)
    	{
    		maxcount = count;
    		maxOcc = arr[i];
    	}
    	//count = 1;
    }

    std::cout<<"Max occuring element: "<< maxOcc <<std::endl;
    std::cout<<"Max time it is occ is: "<< maxcount <<std::endl;

	return 0;
}