#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
	string name;
	int age;
	float height;
public:
	Person()
	{
		name = "Null";
		age = 0;
		height = 0.0f;
	}
	Person(string name_a, int age_a, float height_a)
	{
		name = name_a;
		age = age_a;
		height = height_a; 
	}

	void getData()
	{
		cout<<endl<<"Name  :"<<name;
		cout<<endl<<"Age   :"<<age;
		cout<<endl<<"Height:"<<height;
	}

};

int main()
{
	Person obj, obj2("Rohan", 22, 5.8f);

	obj.getData();
	
	obj2.getData();

	return 0;
}