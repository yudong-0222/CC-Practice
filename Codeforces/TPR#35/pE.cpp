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

    string s1,s2; cin >> s1 >> s2;

    string super = s1 + s2;
    
    // int co = stoi(super);

    // cout << super << endl;
    // if(co%11 == 0) cout << "Yes\n";
    // else cout << "No\n";

    int od = 0, ev = 0;
    
    for(int i = 0; i < super.length(); i++) {
        if(i % 2 == 0) od += super[i] - '0';
        else ev += super[i] - '0';
    }

    int cal = abs(od - ev);
    
    cout << super << endl;
    if(cal % 11 == 0)  cout << "Yes\n";
    else cout << "No\n";

}