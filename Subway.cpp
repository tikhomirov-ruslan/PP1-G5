#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a * b == c) {
        cout << "No difference";
    }
    else if (a * b > c) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}