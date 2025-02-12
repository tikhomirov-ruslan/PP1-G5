#include <iostream>
using namespace std;
int main() {
    int n, m, k, x1, y1, x2, y2;
    cin >> n >> m;
    int a[n][m];
    int i = 0, j = 0;
    while (i < n) {
        while (j < m) {
            a[i][j] = 0;
            j++;
        }
        j = 0;
        i++;
    }
    cin >> k;
    int kwad = 0;
    while (kwad < k) {
        cin >> x1 >> y1 >> x2 >> y2;
        kwad++;
        i = y1, j = x1;
        while (i < y2) {
            while (j < x2) {
                a[i][j] = 1;
                j++;
            }
            j = x1;
            i++;
        }
    }
    i = 0, j = 0;
    /* 
    while (i < n) {
        while (j < m) {
            cout << a[i][j] << " ";
            j++;
        }
        cout << endl;
        j = 0;
        i++;
    }
    */
    int cnt = 0;
    i = 0, j = 0;
    while (i < n) {
        while (j < m) {
            if (a[i][j] == 0) {
                cnt++;
            }
            j++;
        }
        j = 0;
        i++;
    }
    cout << cnt << endl;
}