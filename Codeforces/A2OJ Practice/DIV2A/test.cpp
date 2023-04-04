#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c;
    cin >> r >> c;
    char cake[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> cake[i][j];
        }
    }
    int er = 0, ec = 0;
    for (int i = 0; i < r; i++)
    {
        bool flag = 0;
        for (int j = 0; j < c; j++)
        {
            if (cake[i][j] == 'S')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        else
        {
            er++;
        }
    }
    for (int i = 0; i < r; i++)
    {
        bool flag = 0;
        for (int j = 0; j < c; j++)
        {
            if (cake[i][j] == 'S')
            {
                flag = 1;
                continue;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        else
        {
            ec++;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << cake[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
