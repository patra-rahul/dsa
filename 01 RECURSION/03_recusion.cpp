#include <iostream>
using namespace std;

void print_forward(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    print_forward(i + 1, n);
}

void print_reverse(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout<< n <<endl;
    print_reverse(i, n-1);
}

int main()
{

    // print_forward(1, 5);
    print_reverse(1,5);
    return 0;
}