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
    
    int t;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	
		for(int i = 1; i < 9; ++i) {
			if(i == s[1] - '0') continue;
			else cout << s[0] << i << endl;
		}
		for(int i = 0;  i < 8; i++) {
			char sa = 'a'+i;
			if(s[0] == sa) continue;
			cout << sa << s[1] << endl;
		}
    }
    
    
    
}