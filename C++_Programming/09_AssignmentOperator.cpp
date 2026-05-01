#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;

    b = c = a++;

    cout << a << endl;
    cout << c << endl;
    cout << b << endl;

    b = c = ++a;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}