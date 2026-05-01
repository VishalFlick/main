#include<iostream>
#include<string>
#include<cctype> // for tolower
using namespace std;

int main()
{
    string str ="madam";
    
    //convert string to lowercase
    for(int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    bool isPalindrome = true;
    int n = str.length();

    for(int i = 0; i < n / 2; i++) 
    {
        if(str[i] != str[n - i -1])
        {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;


    /*
    string original;
    cout<< "Enter a string: ";
    cin>> original;

    string reversed = original; // Copy original string
    int n = reversed.length();

    //reverse manually
    for(int i = 0; i < n / 2; i++){
    char temp = reversed[i];
    reversed[i] = reversed[n - i -1];
    reversed[n - i - 1] = temp;
    }

    // check palindrome
    if(original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;
    */
}