/*
這題是要找出一個數字 m
拿 SIN % m 得到的結果是唯一的
可能會有很多個 m 符合條件
但是要找出最小的
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int sin[n];
    for (int i = 0; i < n; i++){
        cin >> sin[i];
    }
    bool is_diff; //紀錄除以m的餘數是否相同，若true則全部不同，若false全部相同
    int m = 1;
    while (true){
        is_diff = true; // 先假設全部相同
        int tmp[n]; // 紀錄除以m的餘數
        for (int i = 0; i < n; i++){
            tmp[i] = sin[i] % m;
            for (int j = 0; j < i; j++){
                if (tmp[j] == tmp[i]){ //一旦找到兩個餘數相同的
                    is_diff = false; //就把is_diff變false
                    break;
                }
            }
            if (!is_diff){
                break; //如果is_diff為false 就不用繼續找了，直接break
            }
        }
        if (is_diff){
            break; //如果is_diff為true 就表示找到了
        }
        m++;
    }
    cout << m << '\n';
    return 0;
}