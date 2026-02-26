// Reverse a String

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string original = "automation";
    string reversed = original; // Copy original string
    reverse(reversed.begin(), reversed.end()); // Reverse the string
    cout<< "Reversed: " <<reversed <<endl;
    return 0;
}