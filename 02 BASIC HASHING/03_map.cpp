// map <key, value>
// key --> what value it is in array (number)
// value --> how many times it appears (frequency)

// map stores everything in sorted way

// map --> ordered O(logn)
// unordered_map --> unordered way O(1)

// map only stores the values given in the input array and corresponds everything other input with zero as value by default
// {'key': 0} --> by default

#include <iostream>
#include <map>
using namespace std;

int main()
{   
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // precompute
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }

    // better way to fetch
    for(auto it: mpp){
        cout << it.first << "-->" << it.second << endl;
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;

    //     // fetch
    //     cout << number << ": " << mpp[number] << endl;
    // }
    
    
    
    return 0;
}