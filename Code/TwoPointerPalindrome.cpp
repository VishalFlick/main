#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "apple";
    int i = 0;
    int j = str.size() - 1;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            cout<<"Not Palindrome";
            return 0;
        }
        i = i + 1;  // i++;
        j = j - 1;  // j--;
    }
    cout<<"Palindrome";

    return 0;
}