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

    int minIndex = 0;
    int min = arr[0];

	for(int i = 1; i < arrsize; i++)
	{
		if(min >arr[i])
		{
			min = arr[i];
            minIndex = i;
		}
	}

    std::cout<<"Minimum value in a array: "<< min <<std::endl;
    std::cout << "Index of minimum value: "<< minIndex << std::endl;

	return 0;
}