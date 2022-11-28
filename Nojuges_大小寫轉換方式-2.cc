#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s,t;
  cin >> s;
  for (int i =0; i <s.size(); i++ ) {
    s[i] ^= 32;
  }
  cout << s << "\n";
}