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


signed main(void) {
    string s, t;
    getline(cin, s);
    getline(cin, t); 

    size_t pos = 0;
    while ((pos = s.find(t)) != string::npos) {
        if (pos > 0) {
            cout << s.substr(0, pos) << endl;
        }
        s.erase(0, pos + t.length());
    }
    if (!s.empty()) cout << s << endl;
}
