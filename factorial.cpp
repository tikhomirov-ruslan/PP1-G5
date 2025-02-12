#include <bits/stdc++.h>
using namespace std;
/*
int Factorial(int n) {
    int c = 1;
    for (int i = 1; i <= n; i++) {
        c *= i;
    }
    return c;

}
*/

int FactorialRec(int n) {
    if (n == 1) {
        return 1;
    }
    return n * FactorialRec(n - 1);
}

int main() {
    int n;
    cin >> n;
    // cout << Factorial(n);
    cout << FactorialRec(n);
}

/* 
int main() {
    int n;
    cin >> n;
    int c = 1;
    for (int i = 1; i <= n; i++) {
        c *= i;
    }
    cout << c;
}
*/