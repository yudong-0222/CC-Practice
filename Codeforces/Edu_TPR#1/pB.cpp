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

int tube[200005];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,use,end,ans = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> use >>end;
        tube[use] --;
        tube[end+5] ++;
    }
    int total = m;
    for(int i = 1; i <= n; i++) {
        total += tube[i];
        ans = max(ans, m - total);
    }

    cout << ans << endl;
}