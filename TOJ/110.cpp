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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int x; cin >> x;

        for(int i = 0; i < x - 3; ++i) {
            for(int j = 0; j < x-1-i; j++) cout << " ";

            for(int j = 0; j < (i+1)*2-1; j++) cout << "*";
            cout << endl;
        }
        

        for(int i = 0; i < x*2-1; i++) cout << "*";
        cout << "\n ";
        for(int i = 0; i < x*2-3; i++) cout << "*";
        cout << endl;
        for(int i = 0; i < x*2-1; i++) cout << "*";
        cout << endl;

        for(int i = 0; i < x - 3; ++i) {
            for(int j = 0; j < i+3; j++) cout << " ";
            for(int j = 0; j < (x-3)*2-1-i*2; j++) cout << "*";
        	cout << endl;
        }
        

    }
}
