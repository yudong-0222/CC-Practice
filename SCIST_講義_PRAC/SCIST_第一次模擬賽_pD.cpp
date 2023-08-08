/*
SCIST 第一次模擬賽 補 

想法:
- 題目要求的是在一串字串當中找到 yee (CaseIgnore)
- 所以我們要做的就是 :
1. 先讀入字串
1-2. 我們可能需要將字串變成都是小寫 然後再利用ASCII下去做判斷 or isupper(str) + tolower(c); 直接轉換大小姐 
2. 利用迴圈下去跑 判斷是否為 'y' 為 'e' (也包含過濾的動作) 
3. OutPut the ans

*/ 

#include <iostream>
using namespace std;
#define IO ios::sync_with_stdio(0),cin.tie(0);

signed main(void) {
    IO;
    string str; cin >> str;
    string su = "yee";    
    int ans = 0,now=0;
    
    for(int i=0;i<str.size();i++) {
        if (isupper(str[i])) str[i] = tolower(str[i]);
        if (str[i] == su[now]) now ++;
        if (now/3) ans ++;
        now %= 3; //清空now
    }
    cout << ans << "\n";
}