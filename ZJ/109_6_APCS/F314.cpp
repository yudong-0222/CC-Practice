#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[55][10005];

signed main(void) {
	fastio;

  int m,n; cin >> m >> n;
  int ans;
  for(int i = 1; i <= m; i++) { //遍歷 m 次。
    int a[10005]; 
    int l[10005] = {0}; //left -> right
    int r[10005] = {0}; // right -> left

    for(int j = 1; j <= n; j++) cin >> a[j];

    //dp
    // 從左到右，存下每個得到的經驗值
    // 從右到左，存下每個得到的經驗值
    // 往上窺探，比較誰比較大。

    for(int j = 1; j <= n; j++) { //l -> r;
      if (j == 1) l[j] = dp[i-1][j] + a[j]; //由左往右遍歷
      else l[j] = max(dp[i-1][j], l[j-1]) + a[j]; //比較上面那行下來的比較大還是
    }

    for(int j = n; j >= 1; j--) { // r -> l;
      if (j == n) r[j] = dp[i-1][j] + a[j]; //由右往左遍歷
      else r[j] = max(dp[i-1][j], r[j+1]) + a[j];
    }

    for(int j = 1; j <= n; j++) {
      dp[i][j] = max(l[j], r[j]);
    }
  }
  
  ans = dp[1][1];
  for(int i = 1; i <= n; i++) ans = max(ans, dp[m][i]); 

  cout << ans << "\n";
}