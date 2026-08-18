// hashing characters
// to hash for all characters, take an array of size 256 characters (contains uppercases as well as lowercase)

// hashing has two components:
// 1. Pre-compute (computing the hash array) / Pre-storing
// 2. Fetching (displaying)
#include <iostream>
using namespace std;

int main()
{
    // int value = 'B'; // typecasting 'B' = 66 (Ascii)
    // cout<<value;

    string s;
    cin >> s;

    //precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;   // Ex: s[0] = 'a' & 'a' - 'a' = 0, therefore index = 0 for 'a'
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // fetching
        cout << c << ": "<< hash[c-'a']<<endl;
    }
    
    
    return 0;
}