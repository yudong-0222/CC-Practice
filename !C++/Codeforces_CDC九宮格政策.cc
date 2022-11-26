#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long  n,m,x;
  cin >>n >> m >> x;
  cout << ((n+x-1)/x) * ((m+x-1)/x) << "\n";
}