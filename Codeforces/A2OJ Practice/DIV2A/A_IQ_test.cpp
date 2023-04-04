#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (even > odd)
        {
            if (arr[i] % 2 == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
        else if (odd > even)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1 << endl;
            }
        }
    }

    return 0;
}