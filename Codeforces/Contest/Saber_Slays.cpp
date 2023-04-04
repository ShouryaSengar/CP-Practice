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
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> s(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    vector<ll> min_d(n + 1, INT_MAX);
    ll md = INT_MAX;
    for_(n)
    {
        md = min(md, s[i]);
        min_d[i] = md;
        cout << min_d[i] << " ";
    }
    vector<ll> max_d(n + 1, INT_MIN);
    md = INT_MIN;
    for_(n)
    {
        md = max(md, s[i]);
        max_d[i] = md;
        cout << max_d[i] << " ";
    }
    cout << endl;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = -1;
        ll max_d = 0;
        for (int i = l; i <= r; i++)
        {
            max_d = max(max_d, s[i]);
            if (max_d > min_d[i + 1])
            {
                ans = max_d;
                break;
            }
        }
        if (ans == -1)
        {
            ans = max_d + 1;
        }
        // cout << ans << endl;
    }
    cout << endl;
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