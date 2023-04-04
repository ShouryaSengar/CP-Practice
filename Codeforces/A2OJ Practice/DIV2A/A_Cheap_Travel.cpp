#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if ((float)b / m >= a)
    {
        cout << n * a << "\n";
    }
    else
    {
        cout << (floor(n / m) * b) + min(((n % m) * a), b) << "\n";
    }

    return 0;
}
