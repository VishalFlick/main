#include<iostream>
#include<fstream>
using namespace std;

// class student to read and write student details
class student
{
private:
    char name[30];
    int age;
public:
    void getData(void)
    {
        cout<<"Enter Name:";
        cin.getline(name, 30);
        cout<<"Enter Age:";
        cin>>age;
    }

    void showData(void)
    {
        cout<<"Name:" << name << ",Age:" << age <<endl;
    }
};

int main()
{
    student s;

    ofstream file;    // writing

    // open file in write mode
    file.open("data.txt", ios::out);

    if(!file)
    {
        cout<<"Error in creating file.." <<endl;
        return 0;
    }
    cout<<"\nFile created successfully." <<endl;

    // write into file
    s.getData(); // read from user

    /*(char*)&s is used to point at the start of an object and sizeof(s)
    calculates the number of bytes copied in file*/

    file.write((char*)&s, sizeof(s));  // write into file

    file.close(); // close the file

    cout<<"\nFile saved and closed successfully." <<endl;
    return 0;
}