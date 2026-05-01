#include<iostream>


int main()
{
	int i = 1, n;
	std::cout<<"Enter a number: ";
	std::cin>>n;

	while(i <= 10)
	{
		std::cout<<n<<" * "<<i<<" = "<<n * i<<std::endl;
		//i++;  
        // i += 1;
         i = i + 1;
	}


	return 0;
}