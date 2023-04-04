#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        if (n <= 10)
        {
            cout << s << "\n";
        }
        else
        {
            cout << s[0] << (n - 2) << s[n - 1] << "\n";
        }
    }
    return 0;
}
