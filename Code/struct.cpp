#include<iostream>
#include<string>

struct person
{
	std::string name;
	int age;
	float weight;
	float height;
	double salary;
};

int main()
{
	person pVar;

	// store data in user defined data type

	pVar.name = "Carolin";
	pVar.age = 34;
	pVar.weight = 67.5f;\
	pVar.height = 5.6f;
	pVar.salary = 80000.78;

	// access data
	pVar.salary = 90000.65;

	//print data of user defined datatype

	std::cout<<"Name: "<< pVar.name <<std::endl;
	std::cout<<"Age: "<< pVar.age <<std::endl;
	std::cout<<"Weight: "<< pVar.weight <<std::endl;
	std::cout<<"Height: "<< pVar.height <<std::endl;
	std::cout<<"Salary: "<< pVar.salary <<std::endl;
}