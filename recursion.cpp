#include <bits/stdc++.h>
using namespace std;
string name(string s) {
    return s;
}

string Hello(string s) {
    return "Welcome, " + name(s) + "!";
}

int main() {
    string s;
    cin >> s;
    cout << Hello(s);
}