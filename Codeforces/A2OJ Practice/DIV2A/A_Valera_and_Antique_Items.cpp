#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, v, ctn = 0;
    cin >> n >> v;
    vector<int> vi;
    for (int j = 0; j < n; j++)
    {
        int k;
        cin >> k;
        int curPrize[k];
        for (int i = 0; i < k; i++)
        {
            cin >> curPrize[i];
        }
        sort(curPrize, curPrize + k);
        if (curPrize[0] < v)
        {
            ctn++;
            vi.push_back(j + 1);
        }
    }
    cout << ctn << endl;
    for (int i = 0; i < vi.size(); i++)
    {
        cout << vi[i] << " ";
    }

    return 0;
}
