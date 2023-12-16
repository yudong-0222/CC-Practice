#include <bits/stdc++.h>
#define int long long
#define F first
#define S second
#define endl "\n"
#define io ios_base::sync_with_stdio(0),cin.tie(0);

using namespace std;

signed main(void) {
    io;
    
    int n; cin >> n;
    int tt = n/10;
    int p = tt/10, t = tt%10, su = n%10;

    int newN = 0;

    if(p*t == su) cout << n << endl;
    else {
        newN += (p * 100 + t * 10) + p*t;
        su = newN%10;
        // cout << newN << endl;
        // cout << "p: " << p << " t: " << t << " su: " << su << endl;
        if(newN < n || su != p*t) {
            // 找下一個比它大的
            if(p >= 5 && p != 9 && t != 0) {
                p+=1;
                t=0;
                newN = (p * 100 + t * 10) + p*t;
            } else {
                t+=1;
                newN = (p * 100 + t * 10) + p*t;
                su = newN % 10;
                if(p*t != su) {
                    p+=1;
                    t = 0;
                    newN = (p * 100 + t * 10) + p*t;
                }
            }
        }
        cout << newN << endl;
    }
}