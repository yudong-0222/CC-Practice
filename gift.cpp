#include "bits/stdc++.h"
using namespace std;
#define int long long 
#define ac ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int ary[1005];
int gift[1005][1005] = {};

signed main(void) {
	ac;
	int ans=0;
	int n,m,p;
	cin >> n >> m ;
	for(int i=1;i<=n;i++) {
		cin >> ary[i];
		gift[0][i] = ary[i];
	}
	
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			cin >> p;
			gift[i][p] = gift[i-1][j];
		}
	}
	
	for(int i=1;i<=n;i++) {
		if(gift[m][i] == ary[i]) {
			ans++;
		}
	}
	cout << ans << "\n";
}