#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> tasks(n);
        for (int i = 0; i < n; i++)
        {
            tasks[i] = {a[i], b[i]};
        }

        sort(tasks.begin(), tasks.end());

        int time = 0, solved = 0;
        for (int i = 0; i < n; i++)
        {
            if (time + tasks[i].first + tasks[i].second <= k)
            {
                time += tasks[i].first + tasks[i].second;
                solved++;
            }
            else
            {
                break;
            }
        }

        cout << solved << endl;
    }

    return 0;
}
