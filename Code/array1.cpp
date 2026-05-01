#include<iostream>

int main()
{
	int arr[] = {100, 200, 300, 400, 500, 600};
	int n = sizeof(arr) / sizeof(arr[0]);

    std::cout<<"Size of array is: "<<n<<std::endl;

	for(int i = 0; i < n; i++)
	{
		std::cout<<arr[i]<<" ";
	}
	return 0;
}