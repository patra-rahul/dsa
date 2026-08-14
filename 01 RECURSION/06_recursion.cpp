// Reversing an array

#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
    return b;
}

void swap_arr(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    swap_arr(arr, l + 1, r - 1);
}

void swap_arr_2(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    swap_arr_2(i + 1, arr, n);
}

int main()
{
    // int a = 5;
    // int b = 4;
    // swap(a, b);
    // cout << a << endl << b;

    // int myArr[6] = {1, 2, 3, 4, 5, 6};
    // swap_arr(myArr, 0, 5);

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << myArr[i] << endl;
    // }

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    swap_arr_2(0, arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Time Complexity : O(n/2)
// Space Complexity : O(n/2)