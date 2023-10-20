#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int k; cin >> k;
  int add = 1;
  for(int i = 0; i < k; i++) {
    // cout << add << "\n";
    if(add >= 10) {
      int a = add % 10; //x1
      int b = (add / 10 ) % 10; //1x
      // cout << a << " " << b << "\n";
      if (a >= b) add = b * 10 + 10;
      else add ++;
    } else {
      add ++;
    }
  }
  cout << add+1 << "\n";
  
}