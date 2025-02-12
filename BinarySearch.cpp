#include <iostream>
#include <algorithm>
using namespace std;
bool isExists(int ints[], int n, int target) {
    if (n <= 0) {
        return false;
    }
    sort(ints, ints + n);
    return binary_search(ints, ints + n, target);
}
int main() {
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(*arr);
    bool exists = isExists(arr, n, x);
    if (exists) {
        cout << "Yes";
    } 
    else {
        cout << "No";
    }
    return 0;
}