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
    
    int n,m; cin >> n >> m;
    int sum = 0,x;
    vector<int> v,al;

    for(int i = 0; i < n; i++) {
        int ma = INT_MIN;
        for(int j = 0; j < m; j++) {
            cin >> x;
            ma = max(ma, x);
        }
        v.eb(ma);
        sum += ma;
    }
    cout << sum << endl;

    for(int i = 0; i < v.size(); ++i) {
        if(sum % v[i] == 0) al.eb(v[i]);
    }
    if(al.empty()) cout << -1;
    else cout << al[0];
    for(int i = 1; i < al.size(); i++) {
        cout << " " << al[i];
    }
    cout << endl;
}