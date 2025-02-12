#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v(10);
    fill (v.begin() + 5, v.end(), 77);
    fill (v.begin(), v.end() - 5, 66);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}