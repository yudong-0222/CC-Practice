#include <bits/stdc++.h>
using namespace std;

int ary[100];

int main () {
    int n,i; 
    cin >> n;
    for (i=0;i<n;i++) {
        cin >> ary[i];
    } 
    for (i=0;i<n;i++) {
    	cout << "ary["<< i << "]: " << ary[i] << "\n";
	}
	return 0;
}