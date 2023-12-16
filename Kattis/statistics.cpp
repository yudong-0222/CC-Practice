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
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

int a[1000005];
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    for(int i = 0; cin >> n; i++) {
        int mi = INT_MAX, mx = INT_MIN;
        for(int j = 0; j < n; j++) {
            int d; cin >> d;
            mi = min(mi, d);
            mx = max(mx, d);
        }
        cout << "Case " << i+1 << ": " << mi << " " << mx << " " << mx - mi << endl;
    }
}