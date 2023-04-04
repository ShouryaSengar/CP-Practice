#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define for_(n) for (ll i = 0; i < n; i++)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void dfs(vvp64 &adj, vector<ll> &v1, vector<ll> &v2, ll node)
{
    v1[node] = 1;
    for (auto &x : adj[node])
    {
        ll v = x.first, w = x.second;
        if (!v1[v])
        {
            v2[v] = v2[node] ^ w;
            dfs(adj, v1, v2, v);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vvp64 adj(n);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dist(n), v1(n, 0);
    dist[0] = 0;
    dfs(adj, v1, dist, 0);

    map<ll, vector<ll>> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[dist[i]].push_back(i);
    }

    for (auto &x : mp)
    {
        if (x.second.size() > 1)
        {
            ll f = x.second[0], s = x.second[1];
            if (f == 0 && s == n - 1)
                cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
            else if (f == 0)
                cout << 1 << " " << n - 1 << " " << s + 1 << " " << n - 1 << endl;
            else if (s == n - 1)
                cout << 1 << " " << f + 1 << " " << 1 << " " << s + 1 << endl;
            else
                cout << 1 << " " << f + 1 << " " << 1 << " " << s + 1 << endl;
            return;
        }
    }

    map<ll, vector<pair<ll, ll>>> mp2;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            mp2[dist[i] ^ dist[j]].push_back({i, j});
            if (mp2[dist[i] ^ dist[j]].size() > 1)
            {
                cout << mp2[dist[i] ^ dist[j]][0].first + 1 << " " << mp2[dist[i] ^ dist[j]][0].second + 1 << " " << mp2[dist[i] ^ dist[j]][1].first + 1 << " " << mp2[dist[i] ^ dist[j]][1].second + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
