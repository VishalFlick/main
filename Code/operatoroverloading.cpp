#include<iostream>
using namespace std;

class Phone
{
private:
	long int price;
public:
	Phone() : price(0)
	{
		cout<<"Default Constructor Called"<<endl;
	}
	Phone(long int price_a) : price(price_a)
	{
		cout<<"Parameterized Constructor Called"<<endl;
	}

	Phone(const Phone &pho) : price(pho.price)
	{
		cout<<"Copy Constructor Called"<<endl;
	}

	Phone operator+(const Phone p)
	{
		Phone temp;
		temp.price = price + p.price;
		return temp;

		//return Phone(price + p.price);
	}

	void operator++()
	{
		++price;
	}

	void operator++(int)
	{
		price++;
	}

	void display();

   ~Phone()
   {
      cout << "Destructor Called for " << price << endl;
   }

};

void Phone::display()
{
    cout << endl << "Price is: " << price <<endl;
}

int main()
{
	int a = 34, b = 45, c = 0;
	c = a + b;

	cout<<"Total: "<< c <<endl;

	// operator overloading

	Phone IQOO1(20000);
	Phone IQOO2(30000);
	Phone total;

	++IQOO1;
	IQOO2++;

	total = IQOO1 + IQOO2;

	total.display();

	return 0;
}