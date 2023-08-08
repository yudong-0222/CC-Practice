#include <bits/stdc++.h>
using namespace std;

int a[1024] = {};
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,i;
    cin >> n;
    for (i=0;i<n;i++) {
        cin >> a[i];
    }
    int r0=0,r1=0,r2=-0,r3=0;
    for (i =0;i<n;i++) {
        if (a[i] % 4 ==0) {
            r0 ++;
        }else if (a[i] % 4 == 1) {
            r1 ++;
        }else if (a[i] % 4 == 2) {
            r2++;
        } else if (a[i] % 4 ==3) {
            r3++;
        } 
    }
    cout << "r2: " << r2 << "\n";
    cout << "r1: " << r1 << "\n";
    cout << "r3: " << r3 << "\n";
    cout << "r0: " << r0 << "\n";
}