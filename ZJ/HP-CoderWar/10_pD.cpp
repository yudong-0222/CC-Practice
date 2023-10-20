#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define F first
#define S second
typedef double dd;

using namespace std;

signed main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    dd v[8] = {-0.350, -0.250, 0.000, 0.250, 0.500, 1.000, 1.500, 2.002};
    char c[7] = {'O', 'B', 'A', 'F', 'G', 'K', 'M'};

    string s;
    dd a,b;

    while(cin >> s >> a >> b) {
        dd mi = a - b;
        cout << s << " ";
        cout << fixed << setprecision(2) << mi << " ";
        for(int i = 0; i < 7; ++i) {
            if(mi >= v[i] && mi < v[i+1]-0.001) cout << c[i] << endl;
        }
    }
    return 0;
}