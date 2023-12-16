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
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

using namespace std;

int pre_sum[200005];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s,t;
    int q,total = 0,l,r;
    cin >> s >> t >> q;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != t[i]) total ++;
        pre_sum[i+1] = total;
    }
    for(int i = 1; i <= q; ++i) {
        cin >> l >> r;
        cout << pre_sum[r] - pre_sum[l-1] << endl;
    }
}