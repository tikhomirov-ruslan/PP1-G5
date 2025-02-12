#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, 3) == "rgb") {;
            cnt++;
        }
    }
    cout << cnt;
}