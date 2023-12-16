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

int a[200005];
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;

    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] = a[i-1] + a[i];
    }
    int q; cin >> q;
    while(q--) {
        int l ,r ,m;
        cin >> l >> r;
        
        if(l > r) {
            m = l;
            l = r;
            r = m;
        }
        cout << a[r] - a[l-1] << endl;
    }
}