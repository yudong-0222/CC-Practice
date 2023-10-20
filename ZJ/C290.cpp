#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

signed main(void) {
	fastio;

  string s; cin >> s;
  int add1=0, add2=0;
  for(int i = 0; i < (int)s.length(); i++) {
    if (i % 2 != 0) add1 += s[i] - '0';
    else add2 += s[i] - '0';
  }

  cout <<abs(add1-add2) << "\n";
}