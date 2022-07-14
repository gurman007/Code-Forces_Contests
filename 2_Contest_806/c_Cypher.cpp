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

void solve()
{
    int n; // no. of wheels...
    cin >> n;
    int sequence[n + 1];
    int initial_seq[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> sequence[i];
    }

    for (int i = 1; i <= n; ++i)
    {
        int req_no = sequence[i];
        int b;   // b(length) is no. of moves(operations) to be performed on ith wheel...
        cin >> b;
        char c;
        // b times charc.. input is required..
        for (int j = 0; j < b; ++j)
        {
            cin >> c;
            if (c == 'D') // if Down, then increment.... ulta chalna....
            {
                if (req_no == 9) { req_no = 0; } 
                else { req_no++; }
            }
            else if (c == 'U')
            {
                if (req_no == 0) { req_no = 9; }
                else { req_no--; }
            }
        }
        initial_seq[i] = req_no;
    }
    // Printing initial_seq...
    for (int i = 1; i <= n; ++i)
    {
        cout << initial_seq[i] << " ";
    }
    cout << "\n";
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