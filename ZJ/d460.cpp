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
    int a;
    cin >> a;
    if(a >= 60) cout << 399 << endl;
    else if(a <= 59 && a >= 18) cout << 890 << endl;
    else if(a <= 17 && a >= 12) cout << 790 << endl;
    else if(a <= 11 && a >= 6) cout << 590 << endl;
    else cout << 0 << endl;
}