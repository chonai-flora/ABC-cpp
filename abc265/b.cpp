#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    int n, m, x, y;
    long long t;
    cin >> n >> m >> t;
    vector<int> a(n - 1);
    for (auto& i : a) cin >> i;
    unordered_map<int, int> xy;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        xy[x] = y;
    }
    for (int i = 0; i < n - 1; i++) {
        if (t <= a[i]) {
            cout << "No\n";
            return 0;
        }
        t += xy[i + 2] - a[i];
    }
    cout << "Yes\n";
    return 0;
}