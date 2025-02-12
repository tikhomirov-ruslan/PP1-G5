#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n * 2; i++) { 
        for (int j = 0; j < ((n * 2) - 1 ) * 2 + 1; j++) {
            if ((i + j == n * 2 - 1) || (2 * n - 1 + i == j)) {
                cout << '*';
            }
            else if ((i == n - 1) && (j > i) && (j < (n * 2) + n - 1 )) {
                cout << '*';
            }
            else if ((i == j + 1) && (j >= n && j < 2 * n) || (i + j == ((n * 2) - 1 ) * 2 + 1 ) && (j >= 2 * n && j < 2 * n + n)) {
                cout << '*';
            }
            else if (i == n * 2 - 1 && j != (((n * 2) - 1) * 2 + 1) / 2) {
                cout << '*';
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}