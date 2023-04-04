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

int main()
{
    fast_cin();

    int n;
    cin >> n;
    vp32 v;
    for_(n)
    {
        int a;
        cin >> a;
        v.pb(mp(a, i + 1));
    }
    sort(v.rbegin(), v.rend());
    int x = 0, y = 0;

    for_(n)
    {
        if (v[0].first == v[i].first)
        {
            x = min(v[0].second, v[i].second);
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[n - 1].first == v[i].first)
        {
            y = max(v[n - 1].second, v[i].second);
        }
    }

    if (x > y)
    {
        cout << (x - 1) + (n - y) - 1 << endl;
    }
    else
    {
        cout << (x - 1) + (n - y) << endl;
    }

    return 0;
}