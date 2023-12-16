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

int check[2000005];
int a[2000005];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    for(int i = 0; i< n; i++) {
        cin >> a[i];
        check[a[i]] ++;
    }

    int ans = 1;
    for(int i = 1000000; i >= 2; i--) {
        int total = 0;
        for(int k = 1; i * k <= 1000000; k++) {
            if(check[i * k] >= 1) total += check[i*k];
            if(total >= 2) break;
        }
        if(total >= 2) {
            ans = i; 
            break;
        }
    }
    cout << ans << endl;

}