/*
SCIST 第一次模擬賽 補 pE

想法:
- 題目要求我們尋找 a^x % P == b
- 不存在輸出 -1

補充概念:
+ a mod P 最多只會有 P 個餘數
+ (a*b) mod P = ((a mod P) x (b mod P)) mod P

題解結論:
+ 所以只要找出 a^1 ~ a^P 就可以
*/ 

#include <iostream>
using namespace std;
#define IO ios::sync_with_stdio(0),cin.tie(0);

signed main(void) {
    IO;
    int a,b,P;cin >> a >> b >> P;
    int tmp =1;
    bool found = false;
    for (int i=1; i<=P; i++) {
        tmp = (tmp * a) % P;
        if (tmp == b) {
            cout << i << "\n";
            found = true;
            break;
        }
    }
    if (!found) cout << -1 << "\n";
}