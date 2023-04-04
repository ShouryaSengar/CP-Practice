#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        long long int mid = n / 2;
        if (k <= mid)
        {
            cout << 2 * k - 1 << endl;
        }
        else
        {
            cout << (2 * k - n) << endl;
        }
    }
    else
    {
        long long int mid = n / 2 + 1;
        if (k <= mid)
        {
            cout << 2 * k - 1 << endl;
        }
        else
        {
            cout << (2 * k - n) - 1 << endl;
        }
    }

    return 0;
}
