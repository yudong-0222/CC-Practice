#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

vector<int> v[1000005];
signed main(void) {
    io;
    
    int n,k; cin >> n >> k;
    int a,b;


    for(int i = 0; i < k; ++i) {
        cin >> a >> b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }

    for(int i = 1; i <= n; ++i) {
        sort(v[i].begin(), v[i].end());

        for(int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j];

            if(j!=v[i].size() -1) cout << " ";
        }
        cout << endl;
    }
    
}