#include<iostream>

int armstrong(int);

int main()
{
	int num, dnum;
	std::cout<<"Enter a number: ";
	std::cin>>num;
	dnum = num;

	int result = armstrong(num);

	if(dnum == result){
		std::cout<< " Number is armstrong " <<std::endl;
	}else{
		std::cout<< " Number is not armstrong " <<std::endl;
	}
}

int armstrong(int n)
{
	int sum = 0;

	while(n > 0)
	{
		int lastdigit = n % 10;
		sum = sum + (lastdigit * lastdigit * lastdigit);
		n = n / 10;
	}

	return sum;
}