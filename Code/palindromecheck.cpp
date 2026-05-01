#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string checkPalindrome(string str)
{
    string srev = str;
    reverse(srev.begin(), srev.end());
    int i = 0;
    while(i < str.size())
    {
        if(str[i] != srev[i])
        {
            return "Not Palindrome";
        }
        i = i + 1;
    }
    return "Palindrome";
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    
    string result = checkPalindrome(str);
    cout<< result <<endl;

    return 0;
}