#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define F first
#define S second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

int ans = 0, n;
int a[2000005];
        // idx枚舉到的第幾顆骰子
        // sum 目前枚舉到的點數和
        // x 枚舉點數目標
void dice(int idx, int sum, int x) {
    if(idx == n) {
        if(sum <= x) ans ++;
        return;
    }
    for(int i=0; i <3; ++i) dice(idx+1, sum+a[i], x);
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    cin >> n >> a[0] >> a[1] >> a[2] >> x;
    dice(0, 0, x);
    cout << ans << endl;
}