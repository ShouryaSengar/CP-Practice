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

bool sortbysec(const pair<int, int> &a, pair<int, int> &b)
{
    return (a.second < b.second);
}
// 2 1 3
// 1 2 3
// 2 2 3 4 1 3 1 5
// 0 1 1 2 3 3 4 4
// 5
// 1
// 2 1 1 2 1
// 0 1 1 3 5
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll menu[n], time[n];
    for_(n)
    {
        cin >> menu[i];
    }
    for_(n)
    {
        cin >> time[i];
    }
    vp64 v;
    for_(n)
    {
        v.pb(mp(menu[i], time[i]));
    }
    sort(all(v));

    for_(n)
    {
        if (v[i].first == v[i + 1].first and i + 1 < n)
        {
            v[i + 1].second = min(v[i].second, v[i + 1].second);
        }
    }
    // sort(all(v), sortbysec);
    set<pair<ll, ll>> s;
    for_(n)
    {
        pair<ll, ll> x = mp(v[i].second, v[i].first);
        s.insert(x);
    }
    // for_(n)
    // {
    //     cout << v[i].first << " ";
    // }
    // cout << endl;
    // for_(n)
    // {
    //     cout << v[i].second << " ";
    // }
    // cout << endl;
    ll tsum = 0;
    if (s.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        ll i = 0;
        for (auto const &x : s)
        {
            if (i >= k)
            {
                break;
            }
            else
            {
                tsum += x.first;
                i++;
            }
        }
        cout << tsum << endl;
    }

    // for (auto const &x : s)
    // {
    //     cout << x.first << " ";
    // }
    // cout << endl;

    // for (auto const &x : s)
    // {
    //     cout << x.second << " ";
    // }
    // cout << endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}