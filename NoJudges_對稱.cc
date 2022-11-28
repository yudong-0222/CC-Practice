#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n ,k,num;
    cin >> n >> k;
    int a[n] = {0};
    // bool result = true;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    bool yes=1;
    //以下我少做了
    for (int i =0,j=n-1;i<j;i++,j--) { //包夾
    int dif = a[i] - a[j];
        if (dif <0) dif-=dif;
        if (dif >k) {
            yes =0;
            break;
        }
    }
    //到上面迴圈結束。
    if (yes) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

//我解題的步驟issues:
/*
1. 我少做一個步驟： 第二個迴圈那邊
   我一開始是想直接用一個迴圈去解 後來參考程式碼發現不太好用
   我自己也試過 但不太好寫。
   

*/