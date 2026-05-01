#include<iostream>
#include<string>


struct student
{
	int roll_no;
	std::string name;
    int percentage;
};

int main()
{
	struct student stud[3]; // data for 3 students

	for(int i = 0; i < 3; i++)  // taking values for user
	{
		std::cout<<"Student " << i + 1 <<std::endl;
		std::cout<<"Enter Roll_No: ";
		std::cin>> stud[i].roll_no;
		std::cout<<"Enter Name: ";
		std::cin>> stud[i].name;
		std::cout<<"Enter Percentage: ";
		std::cin>> stud[i].percentage;

	}

	std::cout<<"These are the result: "<<std::endl;

	for(int i = 0; i < 3; i++) // printing values
	{
		std::cout<<"Student " << i + 1 <<std::endl;
		std::cout<<"Roll No: " << stud[i].roll_no <<std::endl;
		std::cout<<"Name: " << stud[i].name <<std::endl;
		std::cout<<"Percentage: " << stud[i].percentage <<std::endl;
	}
	return 0;
}