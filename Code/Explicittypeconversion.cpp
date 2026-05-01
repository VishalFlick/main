#include<iostream>

int main()
{
	int  var1;

	float var2 = 10.5;

	var1 = static_cast<int>(var2 + 43.1234 + 'C'); // 10 + 43 + 67 = 120

	std::cout<<"The value is: "<< var1 <<std::endl;
	std::cout<<"The value is: "<< var2 <<std::endl;

	return 0;
}