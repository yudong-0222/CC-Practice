#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int a[100005];
signed main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x,R,v; cin >> x >> R >> v;
    int n; cin >> n;
    
    int l,r;

    while(n--) {
        int p, s; cin >> p >> s;
        l = x - R; r = x + R;
        if(p >= l && p <= r) {
            if(s <= v) {
                x = p;
            } else {
                if(p >= x) x -= 15;
                else x += 15;
            }
        }

        // cout << l << " : " << r << endl;
        // cout << "x: " << x << endl;

    }

    cout << x << endl;
    
}

/*

    先計算可接球的範圍 [l,r]
    判斷球速 S <= v
    1 => X == P
    0 => 
        P <= X ? X += r : x-=l;
    



*/