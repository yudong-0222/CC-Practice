#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

signed main(void) {
    io;
    
    int n,m; cin >> n >> m;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int gift = 0;
    int l = 0,r=0;
    for(int i = 0; i < n; ++ i) {
        r = v[i] + m;
        int j = lower_bound(v.begin(), v.end(), r) - v.begin();
        int ac = j - i;
        gift = max(gift, ac);
    }
    cout << gift << endl;
}