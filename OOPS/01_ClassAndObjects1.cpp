//    class --> fighter Plane, Object --> Mig-29, HAL Tejas, Mirage 2000
//    class --> Phone, Object --> IPhone x, Google Pixel, 2XL, Moto G4 Plus

// Class Object In C++

#include<iostream>
using namespace std;

class Phone
{
private:
    string p_name;
    string p_size;

public:

    Phone(string name, string size)
    {
        p_name = name;
        p_size = size;
    }

    void makeCall()
    {
        cout << "Making Call Using " << p_name << endl;
    }

    void receiveCall()
    {
        cout << "Receiving Call Using " << p_name << endl;
    }

};

int main()
{
    Phone iPhone("Iphone_X","1000x500");
    iPhone.makeCall();
    iPhone.receiveCall();

    cout << endl; 

    Phone POCO("POCO F1","1100x600");
    POCO.makeCall();
    POCO.receiveCall();

    return 0;
}
