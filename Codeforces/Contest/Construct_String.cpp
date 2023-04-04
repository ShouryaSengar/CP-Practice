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
    ll n, ctn = 1;
    cin >> n;
    string s, ans;
    cin >> s;
    stack<char> st;
    st.push(s[0]);

    for (int i = 1; i < n; i++)
    {
        if (s[i] == st.top())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.size() % 2 == 1)
            {
                ans += st.top();
            }
            else
            {
                ans += st.top();
                ans += st.top();
            }
            st = stack<char>();
            st.push(s[i]);
        }
    }

    if (st.size() % 2 == 1)
    {
        ans += st.top();
    }
    else
    {
        ans += st.top();
        ans += st.top();
    }

    cout << ans << endl;

    // reverse(std::begin(s), std::end(s));
    // stack<char> st;
    // ll ctn = 1;
    // for (char c : s)
    // {
    //     if (st.empty() || c != st.top())
    //     {
    //         st.push(c);
    //     }
    //     else if (st.top() == c)
    //     {
    //         st.push(c);
    //         ctn++;
    //         if (ctn == 3)
    //         {
    //             st.pop();
    //             st.pop();
    //             ctn = 1;
    //         }
    //     }
    //     else
    //     {
    //         st.push(c);
    //         ctn = 1;
    //     }
    // }
    // while (!st.empty())
    // {
    //     cout << st.top();
    //     st.pop();
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