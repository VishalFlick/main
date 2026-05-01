#include<iostream>


int main()
{
	int n;
    int i = 1, sum = 0;
	std::cout<<"Enter a number: ";
	std::cin>>n;

    // int sum = n * (n + 1) / 2; // formula for sum of first n natural numbers

	do
	{
        //sum = n * (n + 1) / 2;
		sum = sum + i;
        i++;
	}while(i <= n);
    std::cout<<"Sum of first "<<n<<" natural numbers is: "<<sum;

	return 0;
}