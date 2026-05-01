#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Using arithmetic operations
    // a = a + b;
    // b = a - b;
    // a = a - b;
    
    // Using XOR bitwise operation
    //a = a ^ b;
    //b = a ^ b;
    //a = a ^ b;

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}