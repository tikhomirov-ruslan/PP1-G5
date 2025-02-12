#include <bits/stdc++.h>
using namespace std;
string reverse (string s) {
    string srev = s;
    int j = 0;
    for (int i = s.size() - 1; i >= 0; i--){
        srev[j] = s[i];
        j++;
    }
    return srev;
}
int main() {
    string s;
    cin >> s;
    cout << reverse(s);
}