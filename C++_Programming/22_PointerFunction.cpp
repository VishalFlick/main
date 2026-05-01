#include<iostream>
#include<functional>
using namespace std;

typedef int (*PFIntegerOperations)(int, int);

int add(int x, int y)
{
    return x+y;
}

int multiply(int x, int y)
{
    return x*y;
}

int main()
{
    // function pointer for functions: int name(int, int)
    //int (*op)(int, int);

    //PFIntegerOperations op;
    function<int(int, int)> op;

    //cout << "1 for add or 2 for multiply" << endl;
    int n;
    cin >> n;
    if(n == 1)
    {
        op = add;
    }
    else
    {
        op = multiply;
    }
    int x,y;
    cin >> x;
    cin >> y;

    cout << "Operation: " << op(x,y) << endl;

    return 0;
}
