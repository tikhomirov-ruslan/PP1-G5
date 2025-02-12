#include <bits/stdc++.h>
using namespace std;
unsigned char ToUpper(unsigned char c) {
    if (c >= 'a' && c <= 'z') return c - 32;
    else return c;
}
int main() {
    unsigned char c;
    cin >> c;
    cout << ToUpper(c);
}