#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int s1, s2;
  s1 = (a * c) * 2;
  s2 = (b * c) * 2;
  cout << (s1 / 16) + (s2 / 16);
}