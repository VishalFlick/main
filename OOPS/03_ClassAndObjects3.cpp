#include<iostream>
#include<string>
using namespace std;

class FighterPlane
{
private:
    string f_name;
    string f_engine_name;
    string number_of_engine;
    int f_seats;

public:

    FighterPlane()
    {
        // Default Constructor
    }

    FighterPlane(string name, string engine_name, string no_engine, int seats) // Parameterized Constructor
    {
        f_name = name;
        f_engine_name = engine_name;
        number_of_engine = no_engine;
        f_seats = seats;
    }

    void setData(string name, string engine_name, string no_engine, int seats);

    void display()
    {
        cout << "Fighter Plane Name            : " << f_name << endl;
        cout << "Fighter Plane Engine Name     : " << f_engine_name << endl;
        cout << "Fighter Plane Number of Engine: " << number_of_engine << endl;
        cout << "Fighter Plane Number of Seats : " << f_seats << endl;

    } 

};

void FighterPlane :: setData(string name, string engine_name, string no_engine, int seats)
{
    f_name = name;
    f_engine_name = engine_name;
    number_of_engine = no_engine;
    f_seats = seats;
}

int main()
{
    FighterPlane FP;
    FP.setData("HAL Tejas","GE-4O4","Single Engine",1);
    FP.display();
    return 0;
}