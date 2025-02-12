#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cntl = 0, cntr = 0, suml = 0, sumr = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cntl++;
            suml += a[i];
        }
        else if (a[i] % 2 != 0) {
            cntr++;
            sumr += a[i];
        }
    }
    cout << "Left hand magic power: " << cntl * suml << endl;
    cout << "Right hand magic power: " << cntr * sumr << endl;
}