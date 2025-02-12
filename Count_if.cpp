#include <bits/stdc++.h>
using namespace std;
bool IsEven(int i) {
    if (i % 2 == 0) return true;
    else return false;
}
int main() {
    vector <int> v;
    for (int i = 1; i <= 9; i++) {
        v.push_back(i);
    }
    int cnt = count_if(v.begin(), v.end(), IsEven);
    cout << cnt << endl;
}