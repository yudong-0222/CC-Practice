#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int t; cin >> t; 
  while(t--) {
    int sc = 0;
    string s;
    for(int i = 0; i < 10; i++) {
      int ans = 0;
      cin >> s;
      for(int j = 0; j < 10; j++) {
        if(s[j] == 'X') {
          if (i == 0 || i == 9 || j == 0 || j == 9) sc += 1;
          else if (i == 1 || i == 8 || j == 1 || j == 8) sc += 2;
          else if (i == 2 || i == 7 || j == 2 || j == 7) sc += 3;
          else if (i == 3 || i == 6 || j == 3 || j == 6) sc += 4;
          else sc += 5;
        }
      }
    }
     cout << sc << "\n";
  }
}