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

int b[200005];
int x[200005];

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q,l,r;
    cin >> n >> q;

    for(int i = 1; i <= n; ++i) {
        cin >> b[i];
        // cout << "b: " << b[i] << endl;
        b[i] += b[i-1];
    }

    for(int i = 0; i < q; ++i) {
        cin >> l  >> r;
        // cout << l << " r: "<< r << endl;
        cout << b[r] - b[l-1] << endl;
    }
}