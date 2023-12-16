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
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(cin >> s) {
        int n = 0;
        int ss = 1;
        for(int i = 0; i < s.size(); ++i) {
            n += ss*(s[i] - '0');
            ss*= -1;
        }
        // cout << n << endl;
        if(s[0] != '0') cout << s << " " << (n % 11 == 0 ? "is a multiple of 11." : "is not a multiple of 11.") << endl;
    }
}