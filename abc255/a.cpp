#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int r, c, a;
    cin >> r >> c;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        if (i / 2 == r - 1 && i % 2 == c - 1) {
            cout << a << "\n";
        }
    }
    return 0;
}