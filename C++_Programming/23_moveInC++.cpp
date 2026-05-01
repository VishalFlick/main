#include<iostream>
#include<string>
#include<utility>
using namespace std;


int main()
{
    //Construct a new string. this uses copy constructor
    //we have an 'rvalue' on the right, and that will be
    //copied into 'mystring' using the copy constructor

    string myString = "copy construct me";
    string newValue;

    cout << "myString: " << myString << endl;
    cout << "newValue: " << newValue << endl;

    //std::move allows us to 'adopt' or 'steal' the value

    //newValue = move(myString);

    //newValue = myString; // copy
    //Could more explicitly call the static cast here to move
    // the value of myString into newValue

    newValue = static_cast<std::string&&>(myString);

    //Note here, myString is still some 'valid' value.
    //Maybe it stores 'nullptr' int the data int the string
    // but it still exists

    cout << "myString: " << myString << endl;
    cout << "newValue: " << newValue << endl;

    return 0;
}