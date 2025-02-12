#include <bits/stdc++.h>
using namespace std;
int main() {
    char t;
    string s;
    cin >> t >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t) {
            continue;
        }
        else {
            cout << s[i];
        }
    }
}