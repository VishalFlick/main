#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } else {
        cout << "Not an alphabet character" << endl;
    }

    return 0;
}