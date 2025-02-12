#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v;
    for (int i = 1; i <= 9; i++) {
        v.push_back(i);
    }
    rotate(v.begin(), v.begin() + 3, v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}