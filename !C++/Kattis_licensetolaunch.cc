#include <iostream>
using namespace std;

int ary[100010]; //多出來10 確保不要溢出。

int main () {
    int min = 99999; //設定一個最小值
    int ans =0;
    int n;
    cin >>n;

    for (int i=0;i<n;i++) {
        cin >>ary[i];
        if (min > ary[i]) {
            ans = i;
            min = ary[i];
        }
    }
    cout << ans << "\n";
}