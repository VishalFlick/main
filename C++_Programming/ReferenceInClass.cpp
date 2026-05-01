// Reference data member in c++

//NOTES 

//use when you are of with data member can be changed without your knowledge.
//use when you don't need to impliment assignment operator in you class
//(this is restriction ).
//if ok with, the contained object is not owned by the containing object and thus
//their lifetimes are not bound.
//You need to ensure that the referred object is guaranteed to exist till class 
//object exists.

#include<iostream>
using namespace std;

class Base
{
    int &x;
public:
    Base(int& a): x{a} {};
    Base& operator = (const Base& obj)
    { 
        x = obj.x; 
        return *this; 
    }
    void print() { cout << x << endl; }
    
};

int main()
{
    int val = 10;
    Base b(val);
    b.print();
    val = 20;
    b.print();
    int val1 = 30;
    Base b2(val1);
    b2 = b;
    cout<< val1 << endl;

    int* obj = new int(10);
    Base a(*obj);
    a.print();
    delete  obj;
    a.print();
    
    return 0;
}

// assignment operator will not change what b2 is referring to it will
// only change the value of that (val1)
