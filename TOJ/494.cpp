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

    int n,k; cin >> n >> k;

    for(int i = 1; i <= n; i++) { //地板塊行數
        for(int j = 1; j <= k; j++) { //每塊地板的高度
        	for(int l = 1; l <= n; l++) { //每行有幾塊地板
        		for(int p = 1; p <= k; p++) { //每塊地板的寬度
        			if(i % 2 == 1) {
        				if(l % 2 != 0) cout << "*";
        				else cout << " ";
        			} else if(i % 2 == 0){
        				if(l % 2 != 0) cout << " ";
        				else cout << "*";
        			}
        		}
        	}
        	cout << endl;
        }
    }   
}
