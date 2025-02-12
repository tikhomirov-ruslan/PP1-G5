#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m >> k;
  if (k == 1) {
    for (int i = n; i <= m; i++) {
      int j = sqrt(i);
      if (i == j * j) {
        cout << i << " ";
      }
    }
  }
  else if (k == -1) {
    for(int i = m;  i >= n; i--) {
      int j = sqrt(i);
      if (i == j * j) {
        cout << i << " ";
      }
    }
  }
}