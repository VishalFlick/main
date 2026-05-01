#include<iostream>
using namespace std;

int main()
{
    /*int day;
    cout<<"Enter a number (1-7): ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid input! Please enter a number between 1 and 7.";
    }*/

    int a, b;
    cout<<"Simple Calculator\n";
    int options;
    cout<<"1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter your choice: ";
    cin>>options;

    switch(options){
        case 1:
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;
            cout<<"Result: "<<a+b;
            break;
        case 2:
            cout<<"You chose to Subtract";
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;
            cout<<"Result: "<<a-b;
            break;
        case 3:
            cout<<"You chose to Multiply";
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;
            cout<<"Result: "<<a*b;
            break;
        case 4:
            cout<<"You chose to Divide";
            cout<<"\nEnter two numbers: ";
            cin>>a>>b;
            if(b != 0){
                cout<<"Result: "<<a/b;
            } else {
                cout<<"Error: Division by zero is not allowed.";
            }
            break;
        default:
            cout<<"Invalid input! Please enter a number between 1 and 4.";
    }
}