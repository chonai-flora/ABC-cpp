#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p == x) cout << i + 1 << "\n";
    }
    return 0;
}