#include <bits/stdc++.h>
using namespace std;
bool IsDigit(unsigned char c) {
  if (c >= '0' && c <= '9') return true;
  else return false;
}
int main() {
  char c;
  cin >> c;
  if (IsDigit(c) == true) cout << "yes";
  else cout << "no";
}