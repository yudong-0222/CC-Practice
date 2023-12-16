#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

signed main(void) {
    io;
    
    int n,m,x,y;
    cin >> n >> m >> x >> y;

    int a=0,b=0;

    bool yes = false;
    for(a = 0; a <= m; ++a) {
        b = m - a;
        // cout << "a: " << a << endl << "b: " << b << endl;
        if(a*x + b *y == n) {
            yes = true;
            break;
        }
    }

    yes ? cout << a << " " << b << endl : cout << -1 << " " << -1 << endl;

}