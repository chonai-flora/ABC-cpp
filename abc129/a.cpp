#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int p, q, r;
    cin >> p >> q >> r;
    cout << (p + q + r - max({p, q, r})) << "\n";
    return 0;
}