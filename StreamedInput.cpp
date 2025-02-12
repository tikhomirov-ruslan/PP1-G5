#include <bits/stdc++.h>
using namespace std;
int a[100];
int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        a[n]++;
    }
    for (int i = 1; i < 10; i++) {
        cout << a[i] << " ";
    }
}