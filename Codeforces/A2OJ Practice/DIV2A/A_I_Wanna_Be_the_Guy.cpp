#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int hash[n + 1] = {0};
    int p;
    cin >> p;
    int p_level;
    for (int i = 1; i <= p; i++)
    {
        cin >> p_level;
        hash[p_level]++;
    }
    int q;
    cin >> q;
    int q_level;
    for (int i = 1; i <= q; i++)
    {
        cin >> q_level;
        hash[q_level]++;
    }
    bool flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        cout << "Oh, my keyboard!" << endl;
    }
    else
    {
        cout << "I become the guy." << endl;
    }

    return 0;
}
