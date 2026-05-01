#include<iostream>
#include<vector>

int main()
{
	//int arr[] = {400, 700, 200, 600, 800, 100};
	//int n = sizeof(arr) / sizeof(arr[0]);

	int arrsize;
	std::cout<<"Enter the array size: ";
	std::cin>>arrsize;
	//int arr[arrsize];
	std::cout<<"Size of array is: "<<arrsize<<std::endl;
    if(arrsize <= 0)
    {
        std::cout << "Invalid array size!" << std::endl;
        return 0;
    }

    std::vector<int> arr(arrsize);

	for(int i = 0; i < arrsize; i++)
	{
		std::cout<<"Enter index no - "<< i <<" : ";
		std::cin>>arr[i];
	}

    int maxIndex = 0;
    int max = arr[0];

	for(int i = 1; i < arrsize; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
            maxIndex = i;
		}
	}

    std::cout<<"Maximum value in a array is: "<< max <<std::endl;
    std::cout <<"Index of minimum value is: "<< maxIndex << std::endl;

	return 0;
}