#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i;
    int max = -10000;
    cin >> n;
    int ar[n] = {0};
    for (i =0; i < n; ++i) {
        cin >> ar[i];
    }
    for (i = 0; i < n; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }
    cout << max <<" appears the most.\n";
}