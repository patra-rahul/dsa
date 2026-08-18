// character hashing

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // fetch
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    return 0;
}