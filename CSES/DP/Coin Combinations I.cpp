#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define F first
#define S second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

int dp[1000005];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x; 
    cin >> n >> x;
    vector<int> a;

    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        int d; cin >> d;
        a.eb(d);
    }

    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i - a[j] >= 0) {
                dp[i] += dp[i - a[j]];
                dp[i] %= MOD; 
            }
        }
    }

    cout << dp[x] << endl;
}