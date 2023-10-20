#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;
  
  int n; cin >> n;
  while (n--) {
      string s;
      cin >> s;

      if (s == "abc" || s == "acb" || s == "bac"  || s == "cba") {
          cout << "YES" << endl;
      } else {
          cout << "NO" << endl;
      }
  }

}

// bca, cab