#include<iostream>
using namespace std;

// LOGICAL OPERATORS
// AND --> &&
// OR --> ||
// NOT --> !

// -in -4 -3 -2 -1 0 1 2 3 4 +in
// !(NOT) only TRUE For 0

int main()
{
    int a = 10;
    int b = 20;

    if(a == 10 && b == 40 && a < b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    if(a == 1000 || b == 20)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    if(!a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return 0;
}
