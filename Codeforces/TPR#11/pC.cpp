#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define f first
#define s second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

using namespace std;

int check[1000005];
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    for(int i = 1; i <= 100; i++) {
        for(int j = 1; j <= 100; j++) {
            for(int k = 1; k <= 100; k++) {
                check[i + j * k] ++;
                check[i * j + k] ++;
                check[i * j * k] ++;
                check[i + j + k] ++;
            }
        }
    }
		
    int q; cin >> q;
    while(q--) {
        int in; cin >> in;
        cout << check[in] << endl;
    }

}