#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, ans = 1e5;
    cin >> n;
    vector<int> w(n);
    for (auto& i : w) cin >> i;
    for (int t = 1; t < n; t++) {
        int a = 0, b = 0;
        for (int i = 0; i < t; i++) {
            a += w[i];
        }
        for (int i = t; i < n; i++) {
            b += w[i];
        }
        ans = min(ans, -min(b - a, a - b));
    }
    cout << ans << "\n";
    return 0;
}