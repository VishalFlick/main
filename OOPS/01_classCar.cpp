#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
    string name;
    string type;
    int price;
    int seats;
public:
    // default constructor
    Car() : name(""), type(""), price(0), seats(0)
    {
        //name = nullptr;
        //type = nullptr;
        //price = 0;
        //seats = 0;
        cout<<"Default Constructor Called"<<endl;
    }

    // Parameterized Constructor
    Car(string n, string t, int p, int s) : name(n), type(t), price(p), seats(s)
    {
        //name = n;
        //type = t;
        //price = p;
        //seats = s;
        cout<<"Parameterized Constructor Called"<<endl;
    }

    //Setter
    /*void setData(string n, string t, int p, int s)
    {
        name = n;
        type = t;
        price = p;
        seats = s;
    }*/
    void setName(string n){name = n;}
    void setType(string t){type = t;}
    void setPrice(int p){price = p;}
    void setSeats(int s){seats = s;}

    // Getter
    string getName(){return name;}
    string getType(){return type;}
    int getPrice(){return price;}
    int getSeats(){return seats;}




    void display(); // function declaration
};

void Car::display()  // function definition outside class
{
    cout<<"Car Name : "<< name <<endl;
    cout<<"Car Type : "<< type <<endl;
    cout<<"Car Price: "<< price <<endl;
    cout<<"Car Seats: "<< seats <<endl;
}

void print(Car c)
{
    cout<<c.getName()<<"\n"<<c.getType()<<"\n"<<c.getPrice()<<"\n"<<c.getSeats()<<endl;
}

void change(Car& c)
{
    //c.setData("Audi A8", c.getType(), c.getPrice(), c.getSeats());
    c.setName("Audi A8");
}

int main()
{
    //int x = 4;
    //cout<<x<<endl;
    //change(x); // Pass by Value
    //cout<<x<<endl;

    //cout<<"-------------------"<<endl;
    Car c1; 
    //c1.setData("Honda City","Sedan",1500000,5); // Default Constructor Called
    c1.setName("Honda City");
    c1.setType("Sedan");
    c1.setPrice(1500000);
    c1.setSeats(5);
    //c1.display();

    //cout<<endl<<"-------------------"<<endl;
    //Car c2("Maruti Swift","Hatchback",700000,5); // Parameterized Constructor Called
    //c2.display();

    //cout<< endl <<"------Output using Getter function-------"<<endl;
    //Car c3;
    //c3.setData("Totoya Fortuner","SUV",4000000,8); // Default Constructor Called
    //cout<<"Name : "<< c3.getName() <<endl;
    //cout<<"Type : "<< c3.getType() <<endl;
    //cout<<"Price: "<< c3.getPrice() <<endl;
    //cout<<"Seats: "<< c3.getSeats() <<endl;

    //cout<< endl <<"-----Output Using function-----"<<endl;
    //print(c1);
    //print(c2);
    //print(c3);

    print(c1);
    change(c1);
    print(c1);   

    return 0;
}