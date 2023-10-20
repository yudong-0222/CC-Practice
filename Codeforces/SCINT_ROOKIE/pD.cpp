#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long


int a[1055][1055] = {0};
const int MOD = 1e9 + 7;

signed main(void) {

    fastio;

    int n,m,k,s,t; cin >> n >> m >> k >> s >> t;
    
    string str;
    
    for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) {
        cin >> a[i][j];
    }

    int now_x = s, now_y = t;
    int l_x = -1, l_y = -1;
    int cnt = 1;

    if(a[now_x][now_y] > 0) {
      cnt += a[now_x][now_y];
      cnt %= MOD;
    } else if(a[now_x][now_y] < 0) {
      cnt *= -a[now_x][now_y];
      cnt %= MOD;
      a[now_x][now_y] = min(-1LL, a[now_x][now_y] + 1);
    }
    
    cin >> str;
    
    for(int i = 0; i < k; i++) {
        l_x = now_x; 
        l_y = now_y;

        if(str[i] == 'R') {
          if(now_y + 1 <= m) now_y++;
        } else if(str[i] == 'L') {
          if(now_y - 1 >= 1) now_y--;
        } else if(str[i] == 'U') {
          if(now_x - 1 >= 1) now_x--;
        } else if(str[i] == 'D') {
          if(now_x +1 <= n) now_x ++;
        }

        if(now_x != l_x || now_y != l_y)  {
          if(a[now_x][now_y] > 0) {
            cnt += a[now_x][now_y];
            cnt %= MOD;
          } else if(a[now_x][now_y] < 0) {
            cnt *= -a[now_x][now_y];
            cnt %= MOD;
            a[now_x][now_y] = min(-1LL, a[now_x][now_y] + 1);
          }
        } 
    }
    cout << cnt << "\n";
}