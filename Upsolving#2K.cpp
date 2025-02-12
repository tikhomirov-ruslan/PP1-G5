#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int c = s.size() - 1;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += (s[i] - 48) * pow(2,c);
        c--;
    }
    cout << sum;
}
