#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    char c;
    cin >> s >> c;
    int f, l;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            f = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == c) {
            l = i;
            break;
        }
    }
    if (f == l) cout << f;
    else cout << f << ' ' << l;
}