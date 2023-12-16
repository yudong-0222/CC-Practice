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

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s,t; cin >> s >> t;

    int ans = 0;
    for(int i = 0 ; i < s+1; i++) {
        for(int j = 0; j < s+1; j++) {
            for(int k = 0; k < s+1; k++) {
                if(i+k+j <= s && i * k * j <= t) ans ++;
            }
        }
    }
    cout << ans <<endl;
}