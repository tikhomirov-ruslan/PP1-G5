#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int k = 0;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[s.length() - i - 1]) {
            k++;
        }
        else if (k != s.length()) {
            cnt++;
        }
        else {
            cout << 0;
        }
    }
    cout << cnt;
}