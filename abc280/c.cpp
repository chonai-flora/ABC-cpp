#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    for (int i = 0;; i++) {
        if (s[i] != t[i]) {
            cout << i + 1;
            break;
        }
    } 
    return 0;
}