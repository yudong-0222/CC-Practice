#include <bits/stdc++.h>

using namespace std;


int main() {
	
	int n,D,uid,cost=0;
	
	vector<int> vec;
	
	cin >> n;
	for (int i=0; i<n; i++ ) {
		cin >> uid >> D;
		if (D > 100 ) {
			cost+=(D-100)*5;
			vec.push_back(uid);
		}
	}

	sort (vec.begin(), vec.end());
	for (int it:vec)
		cout << it << " ";
	
	cout << "\n";
	cout << cost ;
}