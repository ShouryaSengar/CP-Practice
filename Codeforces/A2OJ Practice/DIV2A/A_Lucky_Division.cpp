#include <bits/stdc++.h>
using namespace std;
int islucky(int n)
{
    int c = 0;
    int l = 0;
    while (n > 0)
    {
        int d = n % 10;
        l++;
        if (d == 4 || d == 7)
        {
            c++;
        }
        n = n / 10;
    }
    if (c == l)
        return 1;
    else
        return 0;
}
int main()
{

    int n;
    cin >> n;
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (islucky(i))
            {
                cout << "YES";
                p++;
                break;
            }
        }
    }
    if (p == 0)
        cout << "NO";
    return 0;
}