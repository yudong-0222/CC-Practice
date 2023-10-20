#include "bits/stdc++.h"
using namespace std;
#define io ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

signed main() {
    int N, Q;
    string S;
    
    io;
    cin >> N >> S >> Q;
    
    int upperCount = 0, lowerCount = 0;
    for (char ch : S) {
        if (isupper(ch)) {
            upperCount++;
        } else {
            lowerCount++;
        }
    }
    
    for (int i = 0; i < Q; ++i) {
        int t, x;
        char c;
        cin >> t>> x >> c;
        if (t == 1) {
            S[x - 1] = c;
            if (isupper(c)) {
                upperCount++;
                lowerCount--;
            } else {
                upperCount--;
                lowerCount++;
            }
        } else if (t == 2) {
            if (upperCount > 0) {
                for (char &ch : S) {
                    if (isupper(ch)) {
                        ch = tolower(ch);
                    }
                }
                upperCount = 0;
                lowerCount = N;
            }
        } else if (t == 3) {
            if (lowerCount > 0) {
                for (char &ch : S) {
                    if (islower(ch)) {
                        ch = toupper(ch);
                    }
                }
                lowerCount = 0;
                upperCount = N;
            }
        }
    }
    
    cout << S << endl;
}