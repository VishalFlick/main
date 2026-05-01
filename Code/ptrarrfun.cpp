#include<iostream>
using namespace std;

//const int max = 5;

void printArr(int *ptr)
{
	for(int i = 0; i < 5; i++)
	{
		cout<< *ptr++ <<endl;
	}
}

int main()
{
	int arr[5] = {10, 20, 30, 40 ,50};
	printArr(arr); // &arr
	return 0;
}