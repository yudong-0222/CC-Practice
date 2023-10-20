#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
signed main(void) {
    
    int ans=INF,M; cin >> M;
    
    string s[3];
    for(int i = 0; i < 3; i++) cin >> s[i];
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            for(int k = 0; k < M; k++) {
                if(s[0][i] != s[1][j] || s[0][i] != s[2][k]) continue;
                int s2[3]{i,j,k};
                if(s2[1] == s2[0]) s2[1] += M;
                if(s2[2] == s2[0]) s2[2] += M;
                if(s2[2] == s2[1]) s2[2] += M;
                ans = min(ans, max({s2[0], s2[1], s2[2]}));
            }
        }
    }
   if(ans == INF) ans =-1;
    cout << ans << "\n";
    
}