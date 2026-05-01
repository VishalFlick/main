#include<iostream>

int main()
{
	/*const int x = 42;

	int xa[x] = {0};

	for(auto& i : xa){
		std::cout<< i <<" ";
	}*/
    const int size = 8;
	int myArray[size] = {0};

	for(auto& i : myArray)
	{
		std::cout<< i <<"\n";
    }
    return 0;
}
