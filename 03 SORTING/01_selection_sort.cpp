#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // selection sort:
    for (int i = 0; i <= n-2; i++)
    {
        int min = i;

        // finds minimum value amongst i to (n-1)
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j] < arr[min]) min = j;
        }
        // swapping of i and new min
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // fetch result
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}

// Time Complexity: O(N^2) --> best/worst/avg case