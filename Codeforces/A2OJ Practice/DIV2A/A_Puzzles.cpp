#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int mini = arr[n - 1] - arr[0];

    for (int i = 0; i <= m - n; ++i)
    {
        mini = min(arr[n - 1 + i] - arr[i], mini);
    }
    cout << mini << endl;
    return 0;
}
