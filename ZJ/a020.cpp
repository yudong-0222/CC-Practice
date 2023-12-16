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

    int tbl[26] = {
        10, 11, 12, 13, 14, 15, 16, 17, 34,
        18, 19, 20, 21, 22, 35, 23, 24, 25,
        26, 27, 28, 29, 32, 30, 31, 33
    };

    string s; cin >> s;
    int f = tbl[s[0] - 'A']; //找到第一個英文字母對應的數字

    int sum = f/10 + (f%10)*9;

    for(int i = 1; i < 9; ++i) sum += (s[i] - '0') * (9 - i);

    sum += s[9] - '0';

    cout << (sum % 10 == 0 ? "real" : "fake") << endl;
}