// Multiple Recursion calls
// Give nth fibonacci number

// In Multiple Recursions, the sequence will be followed, and the succeeding recursion calls will wait until the
// preceding one has completed all the calls and returns a value

#include <iostream>
using namespace std;

int fibonacci(int i){
    if (i <= 1) return i;

    int last = fibonacci(i-1);
    int slast = fibonacci(i-2);
    return last + slast;
}

int main()
{
    cout<<fibonacci(4);
    return 0;
}

// Time Complexity : O(2^n) exponential in nature