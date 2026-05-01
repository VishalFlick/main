#include<iostream>

int main()
{
	int  var1;

	float var2 = 10.5;

	//var1 = var2 + 45.1234 + 'C'; // 10 + 45 + 67 = 122
    var1 = var2 + 45.9234 + 'C'; // 10 + 45 + 67 = 123

	std::cout<<"The value is: "<< var1 <<std::endl;
	std::cout<<"The value is: "<< var2 <<std::endl;

	return 0;
}