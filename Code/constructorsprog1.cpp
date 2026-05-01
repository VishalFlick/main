#include<iostream>
#include<string>
using namespace std;

class Phone
{
private:
    string name;
    string processor;
    int ram;
    int battery;

public:
    // Default Constructor
    Phone() : name("Unknown"), processor("Unknown"), ram(0), battery(0)
    {
        cout<<"Default Constructor Called"<<endl;
    }

    // Parameterized Constructor
    Phone(string name_a, int ram_a, string processor_a, int battery_a)
        : name(name_a), ram(ram_a), processor(processor_a), battery(battery_a)
    {
        cout<<"Parameterized Constructor Called"<<endl;
    }

    // Copy Constructor
    Phone(const Phone &pho)
        : name(pho.name), ram(pho.ram), processor(pho.processor), battery(pho.battery)
    {
        cout<<"Copy Constructor Called"<<endl;
    }

    void display() const
    {
        cout<<endl<<"Name        : "<<name;
        cout<<endl<<"Processor   : "<<processor;
        cout<<endl<<"Ram         : "<<ram<<" GB";
        cout<<endl<<"Battery     : "<<battery<<" mAh"<<endl;
    }

    ~Phone()
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    Phone IQOO;
    IQOO.display();

    cout << "-----------------" << endl;

    Phone IQOO2("IQOO 10 PRO", 16, "Snapdragon 8 Gen 1", 5000);
    IQOO2.display();

    cout << "-----------------" << endl;

    Phone IQOO3 = IQOO2; 
    IQOO3.display();

    return 0;
}