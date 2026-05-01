#include<iostream>

int main()
{
	int arr[5][5];
	int sum = 0;

	for(int i = 0; i < 5; i++) // row
	{
		for(int j = 0; j < 5; j++) // column
		{
			std::cout<<"Row no: "<< i <<"Column no: "<< j <<"Enter a value: ";
			std::cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			sum = sum + arr[i][j];
		}
	}

    std::cout<<"Sum is: "<<sum<<std::endl;

	return 0;
}