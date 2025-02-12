#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    int arr[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = n - 1; i >= 1 - n; i--) {
        for (int j = 1; j <= n; j++) {
            if (i + j - 1 < n and i + j > 0) cout << arr[j][i + j] << " ";
        }
        cout << endl;
    }
}