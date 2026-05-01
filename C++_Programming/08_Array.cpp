#include<iostream>
using namespace std;

int main()
{
    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *(number + 4) << endl;
    cout << *(5 + number) << endl;

    int Matrix [3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}
                        };
    char Matrix1 [3][2] = {{'A','B'},
                /*R  C */  {'C','D'},
                           {'E','F'}
                          };

    char Matrix2 [3][2] = {{'A','B'},{'C','D'},{'E','F'}};



    return 0;
}