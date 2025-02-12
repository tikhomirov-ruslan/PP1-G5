#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
   }
   if (k < max) {
        cout << "Penalty!";
   }
   else {
        cout << "No penalty for today.";
   }
}