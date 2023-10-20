#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
    fastio;
    int n, k, a, b; cin >> n >> k >> a >> b;
    int less = 0, ta = 0, tb = 0;
    int min = INT_MAX;

    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= 10; j++) {
            int now = n - (i * a + j * b) - k;
            if (now < 0) continue;
            if (min >= now) {
                less = now;
                min = now;
                ta = i;
                tb = j;
            }
        }
    }
    
    cout << ta << " " << tb << " " << less << "\n";
}