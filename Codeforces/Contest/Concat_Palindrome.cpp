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
    ll n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    v64 arr(128, 0);
    if (m > n)
    {
        ll temp = n;
        n = m;
        m = temp;
        string tempstr = s1;
        s1 = s2;
        s2 = tempstr;
    }
    for (ll i = 0; i < m; i++)
    {
        arr[s2[i]]--;
    }
    for (ll i = 0; i < n; i++)
    {
        arr[s1[i]]++;
    }

    ll flag = 1, cnt = 0, diff = n - m;
    for (ll i = 0; i < 128; i++)
    {
        if (arr[i] < 0)
        {
            flag = 0;
            break;
        }
        if (arr[i] % 2 == 0)
        {
            continue;
        }
        if (cnt)
        {
            flag = 0;
        }
        else
        {
            cnt = 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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