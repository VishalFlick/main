#include <iostream>
using namespace std;

string check(char grade) {
    string remark;

    switch (grade) {
        case 'A':
            remark = "Excellent";
            break;
        case 'B':
            remark = "Good";
            break;
        case 'C':
            remark = "Passed";
            break;
        case 'F':
            remark = "Failed";
            break;
        default:
            remark = "Invalid";
            break;
    }

    return remark;
}

int main() {
    char grade;
    cout << "Enter grade: ";
    cin >> grade;

    string result = check(grade);
    cout << result << endl;

    return 0;
}