#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define F first 
#define S second 

using namespace std;

signed main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;
    vector<int> s(n+1,-1),t(n+1,-1),idx; //也可以用 vector<pair<int,int>, pair<int,int>> 直接一筆紀錄 很穩
    vector<int> lose(n+1, 0); //失敗次數 m
    for(int i = 1; i <= n; ++i) cin >> s[i];
    for(int i = 1; i <= n; ++i) cin >> t[i];
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        idx.emplace_back(x);
    }

    while(idx.size() > 1) { // 直到剩下一個 遊戲才結束
        vector<int> winner, loser;
        for(int i = 0; i < (int) idx.size(); i+=2) {
            int p1,p2;
            if(i+1 == idx.size()) {
                winner.emplace_back(idx[i]);
                continue;
            } else {
                p1 = idx[i]; p2 = idx[i+1];
            }
            int a = s[p1], b = t[p1], c = s[p2], d = t[p2];
            if(a*b >= c*d) {
                winner.emplace_back(p1);
                s[p1] = a + (c*d)/(2*b);
                t[p1] = b + (c*d)/(2*a);
                s[p2] = c + (c/2);
                t[p2] = d + (d/2);
                lose[p2]++;
                if(lose[p2] < m) loser.emplace_back(p2);
            } else {
                winner.emplace_back(p2);
                s[p2] = c + (a*b)/(2*d);
                t[p2] = d + (a*b)/(2*c);
                s[p1] = a + (a/2);
                t[p1] = b + (b/2);
                lose[p1]++; 
                if(lose[p1] < m) loser.emplace_back(p1);
            }
        }
        idx.clear();
        for(int i : winner) idx.emplace_back(i);
        for(int i : loser) idx.emplace_back(i); 
    }
    cout << idx[0] << endl;
}