// print name n times

// Since we're calling the function n times: 
// TC: O(n)
// SC: O(n)

// The function remains inside the stack space until the base condition is satisfied,
// which happens after n times, therefore Space Complexity is O(n)

#include <iostream>
using namespace std;

void print(int i, int n){
    if (i > n)
    {
        return;
    }
    cout<<"name"<<endl;
    print(i+1, n);
}

int main()
{
    print(1,5);
    return 0;
}