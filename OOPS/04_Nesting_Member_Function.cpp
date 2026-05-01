#include<iostream>
#include<string>
using namespace std;

//Nesting of member functions

class Binary
{
private:
    string str;
    void checkBinary(void);

public:
    void enterNumber(void);
    //void checkBinary(void);
    void onesComplement(void);
    void display(void);
};

void Binary :: enterNumber(void)
{
    //cout << "Enter a binary number: ";
    cin >> str;
}

void Binary :: checkBinary(void)
{
    for(int i = 0; i < str.size(); i++)
    {
        if(str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary :: onesComplement(void)
{
    checkBinary(); // nested call
    for(int i = 0; i < str.size(); i++)
    {
        if(str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }

}

void Binary :: display(void)
{
    cout << "Binary number output" << endl;
    for(int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;

}


int main()
{
    Binary b;
    b.enterNumber();
    //b.checkBinary();
    b.display();
    b.onesComplement();
    b.display();
    return 0;
}
