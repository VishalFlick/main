#include<iostream>

class house
{
private:
	// Member variables
	int length;
	int breagth;
public:
	// Member function
	void setData(int x, int y)
	{
		length = x;
		breagth = y;
	}
	void area()
	{
		std::cout<<"Area of house: "<< length * breagth <<std::endl;
	}
};

int main()
{

    house gini;

    gini.setData(300, 500);

    gini.area();

	return 0;
}