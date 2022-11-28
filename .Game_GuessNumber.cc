#include <bits/stdc++.h>
using namespace std;

int inp(string text) {
    cout << text;
    int a =0;
    cin >> a;
    cout << "\n";
    return a;    
}

int main() {
    srand(time(NULL));
    int n = rand() % 100 +1;
    int i;
    int guess = 0;
    guess = inp("Guess a number between 1 ~ 100: ");

    for (i = 3; i > 0; i--) {
        if (guess > n) {
            cout << "Too high\nYou only have " << i << " times!\n";
            guess = inp("Guess again: ");
        } else if (guess < n) {
            cout << "Too low\nYou only have " << i << " times!\n";
            guess = inp("Guess again: ");
        } else {
            cout << "You got the answer! Answer is: " << n << "\n";
            break;
        } 
    }
    if (i==0) { //
        cout << "Wrong Answer. You have not anymore chances to guess!\n";
        cout << "And the correct answer is: " << n << "\n";
    }
    return 0;
}