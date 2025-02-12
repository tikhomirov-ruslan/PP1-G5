#include <bits/stdc++.h>
using namespace std;
bool comp (int i, int j) {
    return (i % 2 == 0);
}
int main() {
    int a[] = {10, 3, 2, 5, 1, 6, 7, 9, 8, 4};
    vector <int> v (a, a + 10);
    
    sort (v.begin(), v.end());
    sort (v.begin(), v.end(), comp);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}