// Problem: Creating Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1622
// Time Limit: 1000 ms

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
 	
 	string s; cin >> s;
 	sort(s.begin(), s.end());
 	vector<string> v;
 	v.pb(s);
 	
 	while(next_permutation(s.begin(), s.end())) {
 		v.pb(s);
 	}
 	
 	cout << v.size() << endl;
 	
 	for(int i = 0; i < v.size(); i++) {
 		cout << v[i] << endl; 
 	}  
}