#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
/*
int main() {
    int a, b, sum, n;
    cin >> n;
    a = 0;
    b = 1;
    for (int i = 2; i <= n; i++) {
        sum = b + a;
        a = b;
        b = sum;
    }
    cout << sum;
}
*/