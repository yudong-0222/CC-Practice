#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int f(int n) {
    int x = n;
    if (n < 13) {
        x = n;
    } else if (n < 5) {
        x = f(n * 5 - n);
    } else {
        x /= 2;
    }
    return x;
}

int main(void) {
    fastio;
    
    int shit = f(10101);

    cout << shit;
    return 0;
}
