#include<iostream>
#include<string>

int main()
{
	std::string firstName, lastName, address;

    std::cout<<"Enter First name: ";
    std::cin>> firstName;

    std::cout<<"Enter Last name: ";
    std::cin>> lastName;

    std::cin.ignore(); // To ignore the newline character left in the input buffer

    std::cout<<"Enter Address: ";
    getline(std::cin, address);

    //std::string fullName = firstName + " " + lastName;
    std::string fullName = firstName + lastName;

    std::cout<<"Your Details:\n" << fullName << "\n" << address<<std::endl;

	return 0;
}