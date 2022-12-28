#include <bits/stdc++.h>
using namespace std;

int get_max(int a, int b) {
 if (a < b) {
  return b;
 } else {
  return a;
 }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  cout << max(7, 7) <<"\n";
  cout << max(2, 9) <<"\n";
  cout << max(10, 7) <<"\n";

  
  return 0;
}