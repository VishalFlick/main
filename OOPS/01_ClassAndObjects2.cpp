#include<iostream>
using namespace std;

class Test
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }

};

void Test :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Test A;
    A.d = 34;
    A.e = 99;
    A.setData(7,8,9);
    A.getData();

    return 0;
}