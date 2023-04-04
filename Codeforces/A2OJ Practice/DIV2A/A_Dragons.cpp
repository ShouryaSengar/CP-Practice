#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;
    bool flag = 1;
    vector<pair<int, int>> vect;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vect.push_back(make_pair(x, y));
    }
    sort(vect.begin(), vect.end());
    for (int i = 0; i < n; i++)
    {
        if (s > vect[i].first)
        {
            s = s + vect[i].second;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
