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

int pre1[200005],pre2[200005];


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s,t; cin >> s >> t;

    int ans = 0;

    for(int i = 1; i <= t.size(); i++) {
        // if (t[i-1] == '0') {
        //     pre1[i] = pre1[i-1] + 1;
        //     pre2[i] = pre2[i-1];
        // } else if (t[i-1] == '1') {
        //     pre1[i] = pre1[i-1];
        //     pre2[i] = pre2[i-1] + 1;
        // }
        pre1[i] = pre1[i-1] + ( t[i-1] == '0');
        pre2[i] = pre2[i-1] + ( t[i-1] == '1');
    }

    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '1') {
            ans += pre1[t.size() -s.size() + 1 + i] - pre1[i];
        } else {
            ans += pre2[t.size() - s.size() + 1 + i] - pre2[i];
        }
    }

    cout << ans << endl;
}