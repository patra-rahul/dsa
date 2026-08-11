// Backtracking :
// Backtracking is an algorithmic technique that builds a solution piece - by - step and 
// removes("backtracks") any choice that hits a dead end.

// Basically, calling the recursive function before executing, and returning in backwards

#include <iostream>
using namespace std;

void print_forward(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    print_forward(i - 1, n);
    cout << i << endl;
}

void print_backward(int i, int n){
    if (n < 1){
        return;
    }
    print_backward(i, n-1);
    cout<< n <<endl;
}

int main()
{
    // print_forward(5, 5);
    print_backward(5,5);
    return 0;
}