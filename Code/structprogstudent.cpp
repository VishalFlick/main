#include<iostream>
#include<string>


struct student
{
	std::string name;
	int roll_no;
	float marks;
};

int main()
{
    student s1;

    std::cout<<"Enter Student Detail"<<std::endl;
    std::cout<<"Enter student name: ";
    getline(std::cin, s1.name);
    std::cout<<"Enter roll number: ";
    std::cin>>s1.roll_no;
    std::cout<<"Enter a marks: ";
    std::cin>>s1.marks;

    std::cout<<"<-----Student Detail----->"<<std::endl;
    std::cout<<"Student Name: "<<s1.name<<std::endl;
    std::cout<<"Student Roll No: "<<s1.roll_no<<std::endl;
    std::cout<<"Student Marks: "<<s1.marks<<std::endl;


	return 0;
}