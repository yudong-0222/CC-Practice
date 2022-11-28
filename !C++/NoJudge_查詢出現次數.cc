#include <bits/stdc++.h>
using namespace std;

int ary[1024] = {0};
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, i, k, times = 0;
  cin >> n;
  for (i = 0; i < n; ++i) {
    cin >> ary[i];
  }
  cin >> k;
  for (i=0; i<n; ++i) {
    if (k == ary[i]) {
      times++;
    }
  }
  cout << k << " appears " << times << " times\n";
}