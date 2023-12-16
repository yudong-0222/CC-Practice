#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

signed main(void) {
    io;
    
    int t,g,w,e,b;
    cin >> t >> g >> w >> e >>b;

    int sm = g + w + e +b;
    if(t >= sm) cout << sm << endl;
    else cout << -1 << endl;
}