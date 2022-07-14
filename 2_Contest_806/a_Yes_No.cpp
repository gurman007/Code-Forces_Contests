#include                        "bits/stdc++.h"
#include                        <ext/pb_ds/assoc_container.hpp>
#include                        <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define pbds_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define ll                        long long
#define pii                        pair<int, int>
#define pli                        pair<ll, int>
#define pil                        pair<int, ll>
#define pll                        pair<ll, ll>
#define vi                        vector<int>
#define vll                        vector<ll>
#define vb                        vector<bool>
#define vd                        vector<double>
#define vs                        vector<string>
#define ff                        first
#define ss                        second
#define pb                        push_back
#define eb                        emplace_back
#define ppb                        pop_back
#define pf                        push_front
#define ppf                        pop_front
#define vpii                    vector<pii>
#define umap                    unordered_map
#define all(x)                    x.begin(),x.end()
#define setbits(x)                __builtin_popcountll(x)
#define zerobits(x)                __builtin_ctzll(x)
#define mod                        1000000007 // 1e9+7 
#define inf                        1e18
#define w(x)                    int x; cin >> x; while(x--)
#define precise(x)                cout << fixed << setprecision(x)
typedef double                    f80;
mt19937                         rng(chrono::steady_clock::now().time_since_epoch().count());

/* Not a better way....
void solve()
{
    string s;
    cin >> s;
    bool flag = false;
    vector<string> vec {"YES", "YEs", "YeS", "Yes", "yES", "yEs", "yeS", "yes"};
    for (auto comb : vec)
    {
        if (s == comb)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}
*/

void solve()
{
    string s;
    cin >> s;

    for(int i = 0; i < 3; ++i)
    {
        s[i] = toupper(s[i]);
    }
    if(s == "YES")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(tc)
    {
        solve();
    }
    return 0;
}