#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  int check=0;
  int len = s.size();
  for (int i=0; i<len; i++) {
    if (s[i] == 's' && s[i+1] == 's') {
      check ++;
    }
  }
  if (check !=0) cout << "hiss\n";
    else cout << "no hiss\n";
}