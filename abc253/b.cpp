#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h, w, p = -1, q = -1;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < w; j++) {
            if (s[j] == 'o') {
                if (p < 0 && q < 0) {
                    p = j; q = i;
                }
                else {
                    cout << abs(p - j) + abs(q - i) << "\n";
                    return 0;
                }
            }
        }
    }
    return 0;
}