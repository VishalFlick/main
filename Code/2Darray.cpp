#include<iostream>

int main()
{
	int arr[5][5];

	for(int i = 0; i < 5; i++) // row
	{
		for(int j = 0; j < 5; j++) // column
		{
			std::cout<<"Row no: "<< i <<" Column no: "<< j <<" Enter a value: ";
			std::cin>>arr[i][j];
		}
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			std::cout<<"Row no: "<< i <<" Column no: "<< j <<" value is: ";
			std::cout<<arr[i][j]<<std::endl;
		}
	}



	return 0;
}