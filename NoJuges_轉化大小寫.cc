#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char c;
  cin >> c;
  if ( c >= 'A' && c <= 'Z'){
    c = 'a' + (c- 'A');
  } else {
    c = (c-'a') + 'A' ;
  }
  cout << c << "\n";
}