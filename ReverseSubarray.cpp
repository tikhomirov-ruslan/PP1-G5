#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reverse (a + l - 1, a + r);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
} 