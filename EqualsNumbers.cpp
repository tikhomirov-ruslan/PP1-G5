#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[n], cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0) cnt++;
        }
        b[i] = cnt;
        cnt = 0;
    }
    /*            Находятся положительные числа сnt++
                  для первой строки 3
                  для второй тоже 3
                  для третей 3
                  потом находится максимум из этих чисел
                  если все одинаковые
                  вывести "Numbers are equal"
3 4
1 1 -3 1
-4 2 2 1
1 -2 2 1
     
    b[3]
    0 1 2
    3 3 3
    */
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < b[i]) {
            max = b[i];
        }
    } // max = 3
    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        if (b[i] != b[i+1]) { 
            flag = false;
            break;
        } 
    }
    if (flag) cout << "Numbers are equal";
    else {
        for (int i = 0; i < n; i++) {
            if (max == b[i])
            cout << i + 1 << endl;
        }
    }
}