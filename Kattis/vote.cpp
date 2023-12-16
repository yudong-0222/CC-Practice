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
    
 
    int t; cin >> t;
    while(t--) {
        int tt; cin >> tt;
        int rs = 0;
        vector<int> v(tt);
        int mx = imin;
        bool gay = false;

        for(int z = 0; z < tt; z++) {
            cin >> v[z];
            if(v[z] > mx) {
                rs = z;
                mx = v[z];
                gay =false;
            } else if(v[z] == mx) {
                gay = true;
            }
        }

        if(gay) {
            cout << "no winner\n";
            continue;
        }
        int tmp = 0;
        for(int i = 0; i < tt; i++) { 
            if(v[i] != mx) {
                tmp += v[i];
            }
            // cout << "mx: " << mx << endl;
            // cout << "tmp: " << tmp <<endl;
        }
        if(tmp < mx) {
            cout << "majority winner " << rs + 1 << endl;
        } else {
            cout << "minority winner " << rs +1 << endl;
        }      
    }
}