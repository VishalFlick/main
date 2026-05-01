#include<iostream>
#include<string>

int main()
{
	std::string var1;
    char temp;

	std::cout<<"Enter a string: ";
	getline(std::cin, var1);

    temp = var1[0]; // character to be replaced

    for(int i = 1; i <= var1.size(); i++)
    {
    	if(var1[i]== temp)
    	{
    		var1[i] = '$';
    	}
    }

    std::cout<< var1 <<std::endl;

	return 0;
}