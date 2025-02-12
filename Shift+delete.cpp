#include <iostream>
#include <string>
using namespace std;
int main() {
    char s;
    string str;
    cin >> s >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == s){
            str.erase(i, 1);
        }
    }
    cout << str;
}