#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define F first
#define S second

using namespace std;

signed main(void) {
  
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n+5);

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        v.emplace_back(x);
    }
    int ans = 0, sum = v[0];
    for(int i = 0; i < n; ++i) {
        ans += max(0LL, sum - v[i]);
        sum = max(sum, v[i]);
    }

    cout << ans << endl;

}