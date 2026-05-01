#include<iostream>
using namespace std;

int main()
{
    string original = "automation";
    string reversed = original; // Copy original string
    int n = reversed.length();

    for(int i = 0; i < n / 2; i++)
    {
        // swap ith char with its mirror char
        //swap(reversed[i], reversed[n - i - 1]);
        char temp = reversed[i];
        reversed[i] = reversed[n - i - 1];
        reversed[n - i - 1] = temp;
    }
    cout << "Reversed string: " << reversed << endl;   
}
