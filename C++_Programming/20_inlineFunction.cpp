// What is inline functions?
// Advantages of using inline functions.
      //1. Function calling overhead reduced.
      //2. Variables push/pop on the stack is reduced.
      //3. Return call from a function overhead reduced.
      //4. Increases locality of reference by utilizing instruction cache.
      //5. Once inline is done compiler can also apply intra-procedural optimization
      //   if specified.
// Disadvantages of using inline functions.
       //1. if used too may inline function then code size will increase.
       //2. Compilation overhead will increase if someone changes code inside inline
       //   function then all calling location will also be compiled.

#include<iostream>
using namespace std;

inline void print(string str)
{
    cout << str << endl;
}

int main()
{
    for(int i = 0; i < 10000; ++i)
    {
        print("Hello World!");
    }
    return 0;
}