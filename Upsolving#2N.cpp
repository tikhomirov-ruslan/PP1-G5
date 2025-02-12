#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            s.erase(i, 1);
            i--;
        }
        else if (s[i] >= '!' && s[i] <= '/') {
            s.erase(i, 1);
            i--;
        }
        else if (s[i] >= ':' && s[i] <= '@') {
            s.erase(i, 1);
            i--;
        }
        else if (s[i] >= '[' && s[i] <= '_') {
            s.erase(i, 1);
            i--;
        }
    }
    cout << s;
}