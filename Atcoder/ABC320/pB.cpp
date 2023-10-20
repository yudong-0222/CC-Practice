#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool is_good(string st) { //確認我們生成的子字串是回文
  int i = 0;
  int j = st.length() - 1;

  while(i<j) {
    if (st[i] != st[j]) return false;
    i++;
    j--;
  }
  return true;
}

signed main(void) {
  fastio;
  
  string s;
  cin >> s;
  int len = s.length();

  int ans = 0;
  
  for(int i=0;i<len;i++) {
    for(int j = i; j < len; j++) {
      string sub = s.substr(i, j - i + 1); //生成所有可能的子字串
      if (is_good(sub)) { // check, 如果子字串是回文，那們我們就可以保存這個
        ans = max(ans, (int) sub.length()); //找最長的子字串 這就是答案
      }
    }
  }
  cout << ans << "\n";
}