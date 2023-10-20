#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  string s; 
  cin >> s;

  bool okr = true;
  for(int i = 0; i < (int) s.length(); i++) {
    if(s[i] <= s[i+1]) okr = false;
  }

  if(okr) cout << "Yes\n";
  else cout << "No\n";

}