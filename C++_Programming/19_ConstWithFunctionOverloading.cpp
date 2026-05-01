// TOPIC: const keyword on function overloading in C++

//POINTS:
// 1. C++ allows to overload member functions on the basis of const non-const.
// 2. const parameters allows to overload member functions and normal function but it
// should be reference/pointer.

#include<iostream>
using namespace std;

class Test{
    int x;

public:
    Test(int x = 0) : x{x} {}
    /*void print(int& val)
    {
        cout << val <<endl;
    }
    void print(const int& val)
    {
        cout << val <<endl;
    }

    void print(int* val)
    {
        cout << *val <<endl;
    }
    void print(const int* val)
    {
        cout << *val <<endl;
    }*/

    void print()
    {
        cout << "Non Const" <<endl;
    }
    void print() const
    {
        cout << "Const" <<endl;
    }
};

int main()
{
    /*Test t;
    int k = 10;
    const int p = 20;
    t.print(k);
    t.print(p);
    t.print(&k);
    t.print(&p);*/

    Test t1;
    const Test t2;
    t1.print();
    t2.print();
    return 0;
}