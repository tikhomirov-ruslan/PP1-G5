#include <bits/stdc++.h>
using namespace std;
string dextohex(int n) {
    string s;
    while (n > 0) {
        if (n % 16 < 10) {
            s += (n % 16 + 48);
        }
        else {
            s += (n % 16 + 55);  
        }
        n /= 16;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    int n;
    cin >> n;
    cout << dextohex(n);
}