#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define eb(x) emplace_back(x)
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;


signed main(void) {
    io;
    
    int a,b,c;
    cin >> a >> b >> c;
    
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    
    int sa,sb,sc;
    sa = sb = sc =0;

    for(int i = 0; i < a; ++i) {
        int x; cin >> x; v1.eb(x);
        sa += 3 * x;
    }
    for(int i = 0; i < a-1; ++i) sa+=2;

    for(int i = 0; i < b; ++i) {
        int x; cin >> x; v2.eb(x);
        sb += 3 * x;
    }
    for(int i = 0; i < b-1; ++i) sb+=2;
    for(int i = 0; i < c; ++i) {
        int x; cin >> x; v3.eb(x);
        sc += 3 * x;
    }
    for(int i = 0; i < c-1; ++i) sc+=2;

    // cout << "sa: " << sa << endl;
    // cout << "sb: " << sb << endl;
    // cout << "sc: " << sc << endl;

    int maxa = min(sa,sb);
    int fi = min(maxa, sc);

    if(fi == sa) {
        cout << 1 << " " << sa << endl;
    } else if (fi == sb){
        cout << 2 << " " << sb << endl;
    } else if(fi == sc) {
        cout << 3 << " " << sc << endl;
    }
}
