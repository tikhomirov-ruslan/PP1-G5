#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    string s;
    for (int i = 0; i < a; i++) {
        cin >> s;
        if (s.find("@gmail.com") != string::npos)
        cout << s.substr(0,s.size()-10) << endl;
    }
}