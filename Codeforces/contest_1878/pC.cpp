#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

signed main(void) {
	fastio;

  int t; cin >> t;
  while(t--) {
    int n,k,x; cin >> n>> k>> x;

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base case: dp[0][0] = 1
    dp[0][0] = 1;

    // Fill in the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (dp[i - 1][j - 1] == 1 && (i + (i - 1)) <= n) {
                dp[i][j] = 1;
            }
        }
    }

    // Check if it's possible to obtain x with k distinct integers between 1 and n
    if (dp[n][k] == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  }
}