#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, ans = 0;
    cin >> n;
    vector<int> p(n), cnt(n, 0);
    for (auto& i : p) cin >> i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cnt[(p[i] - 1 - i + j + n) % n]++;
        }
    }
    for (auto i : cnt) ans = max(ans, i);
    cout << ans << "\n";
    return 0;
}