// Sum of n numbers
// The value of one recursive function waits for the further depth-recursive function until it fulfills its condition

#include <iostream>
using namespace std;

// paramterized way --->
void print_sum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    print_sum(i - 1, sum + i);
}

// functional recursion way --->
int return_sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + return_sum(n - 1);
}

// factorial of n
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    // print_sum(n, 0);
    cout << return_sum(n) << endl;
    cout << factorial(n);
    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(n) {Stack space}