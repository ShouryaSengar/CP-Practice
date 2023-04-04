#include <bits/stdc++.h>
using namespace std;

int countDistinct(string str, int n)
{
    // Creates an empty hashset
    unordered_set<int> s;

    // Traverse the input array
    int res = 0;
    for (int i = 0; i < n; i++)
    {

        // If not present, then put it in
        // hashtable and increment result
        if (s.find(str[i]) == s.end())
        {
            s.insert(str[i]);
            res++;
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    // Removing all the non alpphabet char
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i, 1);
            i--;
        }
    }
    cout << countDistinct(s, s.size()) << endl;

    return 0;
}
