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

    int t,sta; cin >> t;
    vector<int> v(t);

    for(int i = 0; i < t; i++) cin >> v[i];

    sta = v[0];
    bool reset = false;
    for(int i = 1; i < t; i++) {
        if(reset) { // 判斷數字需要是否變成stdrand
    	 	sta = v[i];
    	 	reset = false;
        	continue;
		}
		
        if(v[i] % sta == 0) {
        	cout << v[i] << endl;
        	reset =true; // 表示下一位數字需要變成stdrand
        }
    }
}