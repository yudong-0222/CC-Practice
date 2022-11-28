#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s,t;
  getline(cin,s);
  for (int i =0; i <s.size(); i++ ) {
    s[i] += 4;
  }
  cout << s << "\n";
}