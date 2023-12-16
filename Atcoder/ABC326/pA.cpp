#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

signed main(void) {
    io;
    
    int x,y; cin >> x >> y;

    if(x > y) {
        if(x-y <= 3) cout << "Yes\n";
        else cout << "No\n";
    } else {
        if(y-x <= 2) cout << "Yes\n";
        else cout << "No\n";
    }
    
}