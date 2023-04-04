#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool yes = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 'o')
            {
                if ((i > 1 and i < n - 1 and
                     j > 1 and j < n - 1) and
                    ((arr[i - 1][j] == arr[i + 1][j]) or
                     (arr[i][j - 1] == arr[i][j + 1])))
                {
                    yes = 1;
                }
            }
            else if ((i == 0 and j == 0) and arr[i + 1][j] == arr[])
        }
    }

    return 0;
}
