#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= col; j++)
            {
                cout << "#";
            }
        }
        else if (i % 4 == 2)
        {
            for (int j = 1; j <= col - 1; j++)
            {
                cout << ".";
            }
            cout << "#";
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (int j = 1; j < col; j++)
            {
                cout << ".";
            }
        }
        else if (i % 4 == 3)
        {
            for (int j = 1; j <= col - 1; j++)
            {
                cout << ".";
            }
            cout << "#";
        }

        cout << endl;
    }

    return 0;
}
