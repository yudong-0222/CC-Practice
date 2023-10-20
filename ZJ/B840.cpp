#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[25][25];
signed main(void) {
    int n, ans = 0;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k+i < n; k++) {
                for(int l = 0; l+j < n; l++) {
                    int cnt = 0;
                    for(int o = i; o <= i + k; ++o) {
                        for(int p = j; p <= j+l; ++p) {
                            cnt += a[o][p];
                        }
                    }
                    ans = max(cnt, ans);
                }
            }
        }
    }
    cout << ans << "\n";
}