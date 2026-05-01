#include<iostream>
#include<string>
using namespace std;


int main()
{
    int num1 = 0, num2 = 0, total = 0;

    cout<<"Enter 2 No's" <<endl;
    cin>> num1 >> num2;

    

    try{
        if(num2 == 0)
        {
            string err = "Number divide by 0";
            throw err;
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
    catch (string y)
    {
        cout << y;
    }
    return 0;
}