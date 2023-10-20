#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcds(int a, int b){
    int t;
    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

signed main(void) {
	ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int a,b,c;
    cin >> a >> b >> c;
    int s2 = gcds(a,b);
    int s = gcds(s2,c);
    int cnt = 0;

    if(a != s) {
      if(a / s - 1 > 3) {
        cnt = 1e18;
      } else {
        cnt += (a/s) - 1;
        // cout << cnt << "\n";
      }
    } 
    if(b != s) {
      if(b / s - 1 + cnt > 3 ) {
        cnt = 1e9;
      } else {
        cnt += (b/s) - 1;
        // cout << cnt << "\n";

      }
      if(cnt > 3) cnt = 1e9;
    } 
    if ( c != s ) {
      if(c/s - 1 + cnt > 3) {
        cnt += 1e9;
      } else {
        cnt += (c/s) - 1;
        // cout << cnt << "\n";
      }
      if(cnt > 3) cnt = 1e9;
    }

    // cout << s << "\n";

    if(cnt <= 3) cout << "YES\n";
    else cout << "NO\n";

  }
}