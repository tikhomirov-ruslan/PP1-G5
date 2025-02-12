#include <bits/stdc++.h>
using namespace std;
int main() {
    int myints[] = {10, 10, 20, 20, 30, 20, 20, 10, 10};
    vector <int> myvector (myints, myints + 9);
    vector <int>:: iterator it;
    it = unique (myvector.begin(), myvector.end());
    myvector.resize (distance (myvector.begin(), it));
    for (it = myvector.begin(); it != myvector.end(); ++it) {
        cout << *it << " ";
    }
}