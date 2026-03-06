#include<iostream>


int main()
{
	int n;
	int i = 1, sum = 0;
	std::cout<<"Enter a number: ";
	std::cin>>n;

    // int sum = n * (n + 1) / 2; // formula for sum of first n natural numbers

	while(i <= n)
	{
        sum = n * (n + 1) / 2; // formula for sum of first n natural numbers
		//sum = sum + i;
		i++;
	}
	std::cout<<"Sum of first "<<n<<" natural numbers is: "<<sum;

	return 0;
}
