#include<iostream>
#include <memory>

int main()
{
    //int *myArray;
	//myArray = new int[8];
	//int *temp = myArray;

	std::unique_ptr<int[]> myArray(new int[8]);

	/*for(int i = 0; i < 8; i++)
	{
		*temp = 2;
		temp++;
	}*/

	myArray[0] = 1;
	myArray[1] = 1;
	myArray[2] = 1;
	myArray[3] = 1;
	myArray[4] = 1;
	myArray[5] = 1;
	myArray[6] = 1;
	myArray[7] = 1;

	/*for(int i = 0; i < 8; i++)
	{
		//myArray[i] = i;
		*(myArray + i) = i;
	}*/

	for(int i = 0; i < 8; i++)
	{
		std::cout<< myArray[i] << "\n";
	}

	//delete [] myArray;
	return 0;
}