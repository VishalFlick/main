
#include<iostream>

int main()
{

//               1  2  3  4  5  6  7
	int arr[] = {2, 3, 2, 2, 1, 1, 2};
	int sum = 0;
	//int i = 4;
	int i;
    std::cout<<"Enter index value: "<<"\n";
	std::cin >> i;
	int size = sizeof(arr)/sizeof(arr[0]); // array size

	if(i > size || i < 0)
	{
		std::cout<<"Invalid input!"<<std::endl;
	}

	for(int j = 0; j <= i-1; j++)
	{
		sum = sum + arr[j];
	}
	std::cout<<"Sum = "<<sum<<"\n";
	return 0;
}