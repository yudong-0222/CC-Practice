#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define F first
#define S second

using namespace std;

signed main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    set<int> s;

    while(cin >> n) {
        x = n;
        bool yes = false;
        s.clear();
        while(n != 1 && !s.count(n)) {
            s.insert(n);
            int t = n;
            n = 0;
            while(t > 0) {
                int p = t % 10;
                n += p *p;
                t/=10;
            }
            if(n == 1) {
                yes = true; 
                break;
            }
        }

        if(yes || n == 1) cout << x << " is a happy number\n";
        else cout << x << " is an unhappy number\n";
    }
    return 0;
}