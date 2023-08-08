#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string input;
    string output = "";
    cin >>input;
    int length = input.length();
    for (int i = length;i>0;--i) {
        if (i != length && i%3==0) {
            output += ",";
        }
        output += input[length-i];
    }    
    cout << output << "\n";
}