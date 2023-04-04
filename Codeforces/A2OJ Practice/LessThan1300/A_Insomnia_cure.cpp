#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d, ctn(0);
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0)
        {
            ctn++;
        }
    }
    cout << ctn << endl;
    return 0;
}
