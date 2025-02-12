#include <bits/stdc++.h>
using namespace std;
int func(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
int main() {
    int n, largest = 0, hell;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                break;
            }
            hell = func(arr[i], arr[j]);
            if (hell > largest) {
                largest = hell;
            }
        }
        
    }
    cout << largest;
}