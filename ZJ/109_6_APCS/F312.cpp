#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int a1,b1,c1,a2,b2,c2,n;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;

  int ans = INT_MIN;

  /*
    簡單來說，這邊就是嘗試每一組 x1,x2 的組合，找到最大值為止。
  */
  for(int x1 = 0; x1 <= n; x1++) { //枚舉所有x1 x2 組合;
    int x2 = n - x1; //x2 就是總員工人數 - x1 直到 x1 == 0
    ans = max(ans, a1*x1*x1+b1*x1+c1+a2*x2*x2+b2*x2+c2); //找最大值。
  }

  cout << ans << "\n";
}