#include <bits/stdc++.h>
#define int long long

using namespace std;

int a[200005];
int pSum[200005];

signed main(void) {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n,q;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 1; i <= n; ++i) {
    pSum[i] = pSum[i-1] + a[i-1]; 
  }
  cin >> q;
  while(q--) {
    int q1,q2;
    cin >> q1 >> q2;

    if(q1 > q2) {
      int q3 = q1;
      q1 = q2;
      q2 = q3;
    }

    cout << pSum[q2] - pSum[q1 - 1] << "\n";
  }
}