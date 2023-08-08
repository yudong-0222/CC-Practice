#include <bits/stdc++.h>
using namespace std;

int a[1020] = {};
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n;
    for (int i=0;i<n; ++i) {
        cin >> k;
        a[k]++;
    } //store in an array 
    int max = 0;
    for (int i=0;i<=1000;++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    // check if it have maxima 
    bool sec=0;
    cout << "ans: [";
    for (int i =0;i<=1000;++i) {
        if (a[i] == max ) {
            if (sec == 1) {
                cout << ", ";
            }
            cout << i;
            sec = 1;
        }
    }    
    cout << "] \n";
}