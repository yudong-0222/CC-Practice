#include <bits/stdc++.h>
using namespace std;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
    map<string, int> distances = {
        {"AB", 3},
        {"BC", 1},
        {"CD", 4},
        {"DE", 1},
        {"EF", 5},
        {"FG", 9}
    };
	unordered_map<string, string> nextPoints = {
	    {"A", "B"},
	    {"B", "C"},
	    {"C", "D"},
	    {"D", "E"},
	    {"E", "F"},
	    {"F", "G"}
	};
	
    string p, q;
    cin >> p >> q;
    int distance = 0;
    string current = p;
    
    if (p + q == "AB" || p + q == "BC" || p + q == "CD" || p + q == "DE" || p + q == "EF" || p + q == "FG") {
        cout << distances[p + q] << "\n";
    } else {
    	if(p > q) {
			swap(p,q);
			current = p;
	    }
	    while (current != q) {
	        string next = nextPoints[current];
		    distance += distances[current + next];
		    current = next;
	    }
        cout << distance << "\n";
    }
}
