#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int k = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == s[s.length() - i - 1])
        {
            k++;
        }
    }
    if(k == s.length())
    {
        cout << "YES" << '\n';
    }
        else 
        {
            cout << "NO" << '\n';
        }
  return 0;
}