#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int req = 5 - k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a <= req)
        {
            v.push_back(a);
        }
    }
    if (v.size() < 3)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << v.size() / 3 << endl;
    }
    return 0;
}
