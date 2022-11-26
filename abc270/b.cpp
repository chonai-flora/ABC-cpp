#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int x, y, z;
    cin >> x >> y >> z;
    if (y < 0) {
        x = -x; y = -y; z = -z;
    }
    if (x < y) cout << abs(x) << "\n";
    else if (y < z) cout << "-1\n";
    else cout << abs(x - z) + abs(z) << "\n";
    return 0;
}