#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[1000005];  //e.g dp[5] 代表骰5點有幾種組合方法。
const int mod = 1e9+7;

signed main(void) {
	fastio;
	int n; 
	cin >> n;

	dp[0] = 1; //投擲到0點的方法：1種 (都不要投值)

	for(int i=1;i<=n;i++) { // walk until N; means our answer
		for(int j=1;j<=6;j++) { //enumeration of the points
			if (i - j >= 0) { //如果還在骰子的範圍裡，才需要被轉移。
				dp[i] += dp[i-j]; // i - j -> 枚舉所有能走到當前這step的方法
				dp[i] %= mod;
			}
		}
	}

	cout << dp[n] << "\n";
  
}