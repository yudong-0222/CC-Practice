#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int n,k; cin >> n >> k;
    int time = 0;
    //k => 每次能消除黑色細胞的數量
    string s; 
    cin >> s;
    for(int i = 0; i < n; i++) {
      if(s[i] == 'B') {
        time ++;
        for(int j = 0; j < k; j++) {
          if(i+j < n) s[i+j] = 'W';
        }
      }
    }
    cout << time << "\n";
  }   
}