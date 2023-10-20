#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(void) {
    int t;
    cin >> t;
    vector<int> v;
    bool same = true;
    int a,b;
    cin >> a;
    for(int i = 0; i < t; i++) {
        cin >> b;
        if(a != b) same = false;
    }

    
    if(same) cout << "Yes\n";
    else cout << "No\n";


}