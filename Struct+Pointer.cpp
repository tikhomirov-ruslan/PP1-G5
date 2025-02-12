#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 5;
    
    int *px = &a; // ampersand - address

    /*
        0xf0323ff804 -> *px, a
    */
    cout << a << endl;
    cout << &a << endl;
    a = 3;
    cout << *px << endl;
    cout << px << endl;
    *px = 7;
    cout << a << endl;

    /*
        it = v.begin() - начало вектора
        it != v.end() - конец вектора
        *it = v[it]     it - адрес *it - элемент, который 
    */
}