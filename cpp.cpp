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

int cl[45];
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int m,n,s; cin >> m >> n >> s;

    for(int i = 1; i <= n; ++i) cin >> cl[i];

    // 應該不用排序
    
    for(int i = 1; i <= m; ++i) {
        if(i == cl[i]) continue;
        else cout << cl[i] << " ";
    }

    cout << endl;
}