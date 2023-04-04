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
    ll n;
    cin >> n;
    v64 vp, vn;
    for_(n)
    {
        ll a;
        cin >> a;
        if (a < 0)
        {
            vn.pb(a);
        }
        else if (a > 0)
        {
            vp.pb(a);
        }
    }
    sort(all(vp));
    sort(vn.rbegin(), vn.rend());
    for_(vn.size())
    {
        cout << vn[i] << " ";
    }
    cout << endl;
    for_(vp.size())
    {
        cout << vp[i] << " ";
    }
    cout << endl;
    cout << endl;
    if (vp.size()==0)
    {
        cout << -1 <<endl;
    }
    else
    {
        if (vn.size()==0)
        {
            cout << vp[0]-1<<endl;
        }
        for(ll i=vp[0]; i>0;i--)
        {
            
        }
        
    }
    
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