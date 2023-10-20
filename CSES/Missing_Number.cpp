#include <bits/stdc++.h>
#define int long long
#define endl "\n"

using namespace std;

int a[1000005];
signed main(void) {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n,sum = 0, s = 0;
  cin >> n;

  for(int i = 0; i < n; ++i) {
    cin >> a[i];
    sum += a[i];
    s+=i;
  }
  cout << s+n - sum << endl;
}

/*
  可以先記算 1 加到 n 的總和 - 輸入所有的數字的總和

*/