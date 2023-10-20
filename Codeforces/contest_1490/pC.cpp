/*

a^3 + b^3 = x;

不要枚舉 a 與 b

枚舉 a 就會得到 b = x - a^3

*/

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(void) {
	fastio;
	
  int n; cin >> n;

  while(n--) {
    int x;
    cin >> x;
    bool ans = false; 
    for(int a = 1; a*a*a<=x;a++) { // 枚舉 a <= x;
      int u = x - a*a*a;
      int e = cbrt(u); // u 的立方根。回傳浮點數
      if (e*e*e != u) continue;
      if (u <= 0) continue;
      ans = 1;
      break;
    }
    cout << (ans == 1 ? "YES\n" : "NO\n" );
  } 
}
