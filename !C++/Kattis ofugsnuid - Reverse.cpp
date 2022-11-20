#include <bits/stdc++.h>
using namespace std;

int ary[100];

int main() {
	long long n;
	int i;
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> ary[i]; 
	}
	for (i=n-1;i>=0;i--){
		cout << ary[i] << "\n";	
	}
	return 0;
	
}