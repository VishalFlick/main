// TOPIC: Introduction to thread in c++ (c++11)

// QUESTION
// 1. What do you understand by thread and give one example in C++?

// ANSWER
// 0. In every application there is a default thread which is main(), in side this we create other threads.
// 1. A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process into multiple threads.
//    For example:
//    (a) The browser has multiple tabs that can be different threads.
//    (b) MS Word must be using multiple threads, one thread to format the text, another thread to process inputs (Spell checker)
//    (c) Visual Studio code editor would be using threading for auto completing the code. (Intellisense)

// WAYS TO CREATE THREADS IN C++11
// 1. Function Pointers
// 2. Lambda Functions
// 3. Functors
// 4. Member Functions
// 5. Static Member Functions

// REQUIREMENT
// Find the addition of all odd number for 1 to 1900000000 and all even number for 1 to 1900000000

#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull oddSum = 0;
ull evenSum  = 0;

void findEven(ull start, ull end)
{
    for(ull i = start; i <= end; ++i)
    {
        if((i & 1) == 0)
        {
            //evenSum = evenSum + i;
            evenSum += i;
        }
    }
}

void findOdd(ull start, ull end)
{
    for(ull i = start; i <= end; ++i)
    {
        if((i & 1) == 1)
        {
            //oddSum = oddSum + i;
            oddSum += i;
        }
    }
}

int main()
{
    ull start = 0, end = 1900000000;

    auto startTime = high_resolution_clock::now();

    std::thread t1(findOdd, start, end);
    std::thread t2(findEven, start, end);

    t1.join();
    t2.join();

    // findOdd(start, end);
    // findEven(start, end);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);

    cout << "OddSum  : " << oddSum << endl;
    cout << "EvenSum : " << evenSum << endl;

    cout << "SEC: " << duration.count()/1000000 << endl;

    return 0;
}