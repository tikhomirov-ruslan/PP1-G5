#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s,t;
    int p, q;
    double max = INT_MIN, c;
    for (int i = 0; i < n; i++) {
        cin >> s >> p >> q;
        c = q;
        if (c / p > max) {
            max = (c / p);
            t = s;
        }
    }
    cout << t;
}   