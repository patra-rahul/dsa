// Check if a string is palindrome

#include <iostream>
using namespace std;

bool check(int i, string &word)
{
    if (i >= word.size() / 2)
        return true;

    if (word[i] != word[word.size() - i - 1])
        return false;

    return check(i + 1, word);
}

int main()
{
    string word = "racecar";
    cout << check(0, word);

    return 0;
}

// Time Complexity : O(n/2)
// Space Complexity : O(n/2) --> Auxiliary space stack (internal temporary memory)