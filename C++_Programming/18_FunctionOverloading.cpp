#include<iostream>
using namespace std;

void add(double x, double y)
{
    cout << "FIRST" << endl;
}

void add(int x, int y)
{
    cout << "SECOND" << endl;
}

int main()
{
    add(3.5, 4.4);
    add(2,3);

    return 0;
}