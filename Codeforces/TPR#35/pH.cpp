#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define F first
#define S second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

int f(int x, int y, int z) {
    return 10 * x + 9 * y + z;
}

int g(int x) {
    return 8 * x + 71;
}

int h(int x, int y) {
    return 4 * x - 7 * y;
}

int gf(const string& s) {
    stack<int> nums;
    stack<char> funcs;

    stringstream ss(s);
    char c;
    int num;
    while (ss >> c) {
        if (c == 'f' || c == 'g' || c == 'h') {
            funcs.push(c);
        } else if (isdigit(c)) {
            ss.putback(c);
            ss >> num;
            nums.push(num);
        } else if (c == ')') {
            int x, y, z;
            if (funcs.top() == 'f') {
                z = nums.top();
                nums.pop();
                y = nums.top();
                nums.pop();
                x = nums.top();
                nums.pop();
                nums.push(f(x, y, z));
            } else if (funcs.top() == 'g') {
                x = nums.top();
                nums.pop();
                nums.push(g(x));
            } else if (funcs.top() == 'h') {
                y = nums.top();
                nums.pop();
                x = nums.top();
                nums.pop();
                nums.push(h(x, y));
            }
            funcs.pop();
        }
    }
    return nums.top();
}

signed main(void) {
    string s; cin >> s;
    //這啥 我想跳樓了。
    cout << gf(s) << endl;
}
