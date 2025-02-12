#include <iostream>
using namespace std;

bool Xor(bool a, bool b) {
    if (a == b) return false;
    else return true;
}
string s() {
    return "Hello!";
}
int max(int a, int b) {
    if (a >= b) {
        return a;
    }
    else {
        return b;
    }
}
int pow(int a, int b) {
    int p = 1;
    for (int i = 0; i < b; i++) {
        p *= a;
    }
    return p;
}
int sum (int a, int b) {
    return a + b;
}
int main() {
    int a, b; 
    cin >> a >> b;
    /* 
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    cout << max(a, b) + max(n, m);

    */
   cout << "Xor" << " " << Xor(a, b) << endl;
   cout << s << endl;
   cout << "Max" << " " << max(a, b) << endl;
   cout << "Pow" << " " << pow(a, b) << endl;
   cout << "Sum" << " " << sum(a, b);
   return 0;
}