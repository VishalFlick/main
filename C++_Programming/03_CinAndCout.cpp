#include<iostream>
using namespace std;

int main()
{
    int num;
    string str;
    cout << "Hi There" << endl << "This Is Vishal!" << endl;
    cout << "Hello World!";
    cin >> num;
    cout << num <<endl;
    cin >> str;
    cout << str <<endl;

    return 0;
}


//----------------------------Theory-----------------------------------------

//cin == console input
//cout == console output

//cin and cout both are objects of istream and ostream class respectively, these two
//classes resides inside istream and ostream header file and these two header files
//are include(merged) in iostream.

//cin is used with stream extraction operator (>>)
//cout is used with stream insertion operator (<<) 