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
#define MOD 1000000007
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
ll arr[100001], mat[10001][10001], mat1[10001][10001];
void solve()
{
    ll n, m, k, flag = 0;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            mat[i][j] = (i - 1) * m + j;
            mat1[i][j] = mat[i][j];
        }
    while (k--)
    {
        ll q, x, v;
        cin >> q >> x >> v;
        if (q == 0)
        {
            for (int i = 1; i <= m; i++)
            {
                mat[x][i] = (mat[x][i] * v);
                mat1[x][i] = (mat1[x][i] * v) % MOD;
            }
        }
        else if (q == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                mat[i][x] = (mat[i][x] * v);
                mat1[i][x] = (mat1[i][x] * v) % MOD;
            }
        }
    }
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sum += mat[i][j];
            sum = sum % MOD;
        }
    }
    cout << sum << endl;
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
