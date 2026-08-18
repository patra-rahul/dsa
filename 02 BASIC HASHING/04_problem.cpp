// Given an array of size N. Find the highest and lowest frequency element.

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
    int hash[13] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // fetch
        cout << number << "-->" << hash[number] << endl;
    }

    int max_freq = 0;
    int min_freq = size;

    int max_ele = 0;
    int min_ele = 0;

    int count = 1;

    for (int i = 0; i < 13; i++)
    {
       if (hash[i] != 0 && hash[i] > max_freq)
       {
        max_freq = hash[i];
        max_ele = i;
       }
       if (hash[i] != 0 && hash[i] < min_freq)
       {
        min_freq = hash[i];
        min_ele = i;
       }
    }
    
    cout << "Maximum Occurence of " << max_ele << " with frequency: " << max_freq << endl;
    cout << "Minimum Occurence of " << min_ele << " with frequency: " << min_freq << endl;
    
    return 0;
}