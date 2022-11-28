#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s,t;
  cin >> s;
  int len = s.size();
  for (int i=0; i< len; i++) {
    if (s[i] >='A' && s[i] <= 'Z' ) {
      t += s[i];
    }
  }
  cout << t << "\n";
}