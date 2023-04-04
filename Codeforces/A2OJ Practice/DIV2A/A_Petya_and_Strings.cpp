#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if (s1.compare(s2) < 0)
    {
        cout << -1 << endl;
    }
    else if (s2.compare(s1) < 0)
    {
        cout << 1 << endl;
    }
    else if (s1.compare(s2) == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
