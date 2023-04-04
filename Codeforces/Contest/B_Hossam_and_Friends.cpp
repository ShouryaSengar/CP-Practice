#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

const int MAXN = 1e5;
int t, n, m;
vector<int> e[MAXN + 1];
int vis[MAXN + 1];
unordered_set<int> p;

int dfs(int u, int c)
{
    vis[u] = c;
    int res = 1;
    for (int v : e[u])
    {
        if (vis[v] == c)
            continue;
        res += dfs(v, c);
    }
    return res;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        p.clear();
        for (int i = 1; i <= n; i++)
            e[i].clear();
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            e[x].push_back(y);
            e[y].push_back(x);
            p.insert((x - 1) * n + y);
            p.insert((y - 1) * n + x);
        }
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i])
                continue;
            int c = dfs(i, i);
            ans += (long long)c * (c - 1) / 2;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j : e[i])
            {
                if (vis[i] == vis[j])
                    continue;
                int a = vis[i], b = vis[j];
                if (a > b)
                    swap(a, b);
                if (p.count(a * n + b))
                    continue;
                ans += (long long)dfs(a, b) * dfs(b, a);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
