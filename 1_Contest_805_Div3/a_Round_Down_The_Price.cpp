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
#define w(x)                int x; cin >> x; while(x--)
#define precise(x)                cout << fixed << setprecision(x)
typedef double                    f80;
mt19937                         rng(chrono::steady_clock::now().time_since_epoch().count());


signed main()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.in" , "r" , stdin);
    freopen("outputf.in" , "w" , stdout);
#else
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#endif
    w(tc)
    {
        int n;
        cin >> n;
        string s = to_string(n);
        string t = "1" + string(s.size() - 1, '0');
        int m = atoi(t.c_str());
        cout << n - m << endl;
        //solve();
    }
    return 0;
}