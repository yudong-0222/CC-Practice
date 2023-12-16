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

    int n; cin >> n;
    vector<int> v(8);
    vector<int> p(8);
    while(n--) {
        for(int i = 1; i <= 7; ++i) {
            cin >> v[i];
        }
        for(int i = 1; i <= 7; i++) {
            cin >> p[i];
        }
    }
    
    string ans = "";
    if(v[2] == v[4] || v[2] != v[6] || p[2] == p[4] || p[2] != p[6]) ans+="A";
    if(v[1] != 1 || p[7] != 0) ans += "B";
    if(v[2] == p[2]||v[4] == p[4] || v[6] == p[6]) ans += "C";

    if(ans == "") cout << "none\n";
    else cout << ans << endl;
}