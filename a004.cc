#include <iostream>
using namespace std;

int a[1010];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 4==0 && n%100 !=0 && n %400 ==0) {
        cout << "閏年\n";
    } else {
        cout << "平年\n";
    }
}


//先處裡個位數 (取個位數)
//