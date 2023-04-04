#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1, s2;
    cin >> s;
    int num = stoi(s);

    if (num >= 0)
    {
        cout << s << endl;
    }
    else
    {
        int n = s.length();
        s1 = s;
        s1.erase(s1.begin() + n - 2);
        s.erase(s.begin() + n - 1);
        string mini = min(s, s1);
        if (mini == "-0")
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min(s, s1) << endl;
        }
    }

    return 0;
}
