#include <bits/stdc++.h>
using namespace std;
bool isTruth(string s) {
    int cnt = 0;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 65 ) {
            cnt += 1;
        }
    }
    if (cnt == len) {
        cout << s << endl;
        cnt = 0;
    } else {
        cnt = 0;
    }
}
int main() {
    string t, s;
    getline(cin, t);
    stringstream x(t);
    while (getline(x, s, ' ')) {
        isTruth(s);
    }
} 