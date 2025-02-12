#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main() {
    int n;
    cin >> n;
    int c = 1;
    int max = 0;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        if (d > max) max = d;
        for (int j = 0; j < d; j++) {
            a[j] = c;
        }
        c++;
    }
    int cnt = 1;
    for (int i = 0; i < max - 1; i++) {
        if (a[i] != a[i+1]) cnt++;
    }
    cout << cnt;
}