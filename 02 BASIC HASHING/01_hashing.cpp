// Basic Hashing -> prestoring/ fetching
// 10^8 operations take 1 second to get computed

// inside the main function, you can't declare an int array of size more than 10^6, a bool array of size more than 10^7
// globally, you can't declare an int array of size more than 10^7, a bool array of size more than 10^8

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

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int number;
        cin >> number;

        // fetch
        cout << number << ":" << hash[number] << endl;
    }

    return 0;
}