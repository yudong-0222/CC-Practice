#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a , f;
	for (int i =0 ; i<n ; i++) {
		cin >>a >>f;
		for (int j=0;j<f;j++) {
			if (j!=0)cout << "\n";
			for (int k=1;k<=a;k++) {
				for (int l=0;l<k;l++) {
					cout << k;
				}
				cout << "\n";
			}
			for (int k =a-1;k>=1;k--) {
				for (int l=0;l<k;l++) {
					cout << k;
				}
				cout << "\n";
			}
		}
	}
}