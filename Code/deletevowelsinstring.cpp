#include<iostream>
#include<string>

int main()
{
	std::string var1;

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

    for(int i = 0; i <= var1.size(); i++)
    {
    	if(var1[i] == 'a' || var1[i] == 'e' || var1[i] == 'i' || var1[i] == 'o' || var1[i] == 'u')
    	{
    		var1[i] = ' ';
    	}
    }

    std::cout<< var1 <<std::endl;

	return 0;
}