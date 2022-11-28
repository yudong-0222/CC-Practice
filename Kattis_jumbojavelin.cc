#include <bits/stdc++.h>
using namespace std;

int ary[105];

int main () {
    int n,ans=0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> ary[i];
        ans += ary[i]; //ans = ans + ary[i];     
    }
    int new_ans = ans-(n-1);
    cout << new_ans << "\n";
}