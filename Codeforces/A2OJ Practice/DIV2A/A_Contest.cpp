#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mp = max((3 * a) / 10, a - a / 250 * c);
    int vp = max((3 * b) / 10, b - b / 250 * d);

    if (mp == vp)
    {
        cout << "Tie" << endl;
    }
    else if (mp > vp)
    {
        cout << "Misha" << endl;
    }
    else
    {
        cout << "Vasya" << endl;
    }

    return 0;
}
