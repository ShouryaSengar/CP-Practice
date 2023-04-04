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
    ll n, ctn = 0;
    cin >> n;
    string s;
    cin >> s;
    // bool flag =0;
    // for_(n)
    // {
    //     if(s[i]=='+' or s[i] =='-')
    //     {
    //         flag =1;
    //     }
    // }
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                int Pctn = 0;
                int Nctn = 0;
                if (i > 0)
                {
                    if (s[i - 1] == '+')
                        Pctn++;
                    else if (s[i - 1] == '-')
                        Nctn++;
                }
                if (i < n - 1)
                {
                    if (s[i + 1] == '+')
                        Pctn++;
                    else if (s[i + 1] == '-')
                        Nctn++;
                }
                if (Pctn == 1 && Nctn == 0)
                {
                    s[i] = '+';
                    flag = true;
                }
                else if (Pctn == 0 && Nctn == 1)
                {
                    s[i] = '-';
                    flag = true;
                }
                else if (Pctn == 1 && Nctn == 1)
                {
                    // Do nothing, leave it as neutral
                }
                else if (Pctn == 2 && Nctn == 0)
                {
                    s[i] = '+';
                    flag = true;
                }
                else if (Pctn == 0 && Nctn == 2)
                {
                    s[i] = '-';
                    flag = true;
                }
            }
        }
    }
    int zero = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
    }
    cout << zero << endl;
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