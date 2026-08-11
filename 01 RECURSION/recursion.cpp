// stack overflow [ Segmentation Fault ] --> The function calls wait inside the stack
// to be called but fails to do so due to another recursive call.
// Ultimately, C++ breaks the program and stops it as a segmentation fault
// That's why a specific condition is required, to stop it --> Base Condition

// Recursion
// Base Case
// Stack Space
// Recursion Tree

#include <iostream>
using namespace std;

int count1 = 0;
void counter()
{
    if (count1 == 4)
    {
        return; // gets terminated
    };
    cout << count1 << endl;
    count1 = count1 + 1;
    counter();
}

int main()
{
    counter();
    return 0;
}