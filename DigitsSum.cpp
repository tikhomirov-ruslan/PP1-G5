#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string d = "0123456789";
    for (int i = 1; i < d.size(); i++) {
        for (int j = 0; j < d.size(); j++) {
            for (int k = 0; k < d.size(); k++) {
                if (d[i] + d[j] + d[k] - 48 * 3 == n) {
                    cout << d[i] << d[j] << d[k] << endl;
                }
            }
        }
    }
}
/*
input
3
output
102
111
120
201
210
300
*/