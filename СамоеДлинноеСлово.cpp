#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  getline (cin, s);
  int cnt = 0, max = INT_MIN, pos;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ') cnt++;
    else {
      if (cnt > max) {
        max = cnt;
        pos = i - max;
      }
      cnt = 0;
    }
    if (cnt > max) {
      max = cnt;
      pos = i - max + 1;
    }
  }
  cout << s.substr(pos, max) << endl << max;
}