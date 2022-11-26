#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    int a = 11, b = 0;
    int c = 11, d = 0;
    for (int i = 0; i < 10; i++) {
        cin >> s;
        for (int j = 0; j < 10; j++) {
            if (s[j] == '#') {
                a = min(a, i + 1);
                b = max(b, i + 1);
                c = min(c, j + 1);
                d = max(d, j + 1);
            }
        }
    }
    cout << a << " " << b << "\n"
         << c << " " << d << "\n";
    return 0;
}