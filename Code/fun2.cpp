#include<iostream>

int main()
{
	//int  *ip = new int;
	//*ip = 44;

	//int num = 55;
	//int *xnum = &num;

    //std::cout << ip <<"\n";
	//std::cout << *ip <<"\n";
	//std::cout << *xnum <<"\n";

	struct num
	{
		int theNumber;
	}x, Num;

	Num.theNumber = 5;
	//struct num x;
	x.theNumber = 3;

	//std::cout<< Num.theNumber <<"\n";
    std::cout<< x.theNumber <<", "<< Num.theNumber <<"\n";
    //delete ip;
	return 0;
}