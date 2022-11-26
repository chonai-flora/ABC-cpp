#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h, m;
    cin >> h >> m;
    if (h / 10 * 10 + m / 10 < 24 && (h % 10) < 6) {
        cout << h << " " << m << "\n";
    }
    else {
        int H = h + 1;
        cout << (H > 15 && H < 20 ? 20 : H % 24) << " 0\n";
    }
    return 0;
}