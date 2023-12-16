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

int pre[2505][2505];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m; cin >> n >> m;
	
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> pre[i][j];
        }
    }
    for(int i =1; i <= n; ++i) for(int j = 1; j <= m; ++j) {
        pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + pre[i][j];
    }

    int q,x1,x2,y1,y2; cin >> q;

    while(q--) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1++; y1++; x2++; y2++; //Avoid Overflow :(
        // cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        cout << pre[x2][y2] - pre[x2][y1-1] - pre[x1-1][y2] + pre[x1-1][y1-1] << endl;
    }
}

//WA