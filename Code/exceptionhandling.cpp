#include<iostream>
using namespace std;


int main()
{
    int num1 = 0, num2 = 0, total = 0;

    cout<<"Enter 2 No's" <<endl;
    cin>> num1 >> num2;

    

    try{
        if(num2 == 0)
        {
            throw num2;
        }
        else
        {
            total = num1 / num2;
            cout<<"Output is " << total;
        }
    }
    catch(int x)
    {
        cout<<"Exception is :Divide by "<< x;
    }
    return 0;
}