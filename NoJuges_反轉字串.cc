#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s,t,u;
  cin >> s;
  for (int i =s.size()-1; i >=0; i--) {
    t += s[i];
  }
  cout << t << "\n";
}