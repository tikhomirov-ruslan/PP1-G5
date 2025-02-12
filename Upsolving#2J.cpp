#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string t = s;
    int cnt = 0;
    reverse(t.begin(), t.end());
    if (s == t) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < s.size(); j++) {
                if (s[i] == s[j]) cnt++;
            }
            if (cnt == s.size()) {
                cout << 0;
                return 0;
            }
        }
        s.erase(0,1);
        cout << s.size();  
    }
    else cout << s.size();
}