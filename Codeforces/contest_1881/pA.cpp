#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void) {
	ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n,m,cnt = 0;
    string x,s,temp;
    cin >> n >> m >> x >> s;
    int ma = 10;
    while(x.find(s) == string::npos && cnt < ma) {
      x += x;
      cnt ++;
    }
    if (cnt >= ma) cnt = -1;
    cout << cnt << "\n";  
  }
}