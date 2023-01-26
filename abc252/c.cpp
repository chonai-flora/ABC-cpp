#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, ans = 1000;
    cin >> n;
    int cnt[10][10] = {{0}};
    vector<string> s(100);
    for (auto& t : s) cin >> t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cnt[(s[i][j] - '0')][j]++;
		}
	}
	for (int i = 0; i < 10; i++) {
		int r = 0;
		for (int j = 0; j < 10; j++) {
			r = max(r, 10 * (cnt[i][j] - 1) + j);
		}
		ans = min(ans, r);
	}
	cout << ans << "\n";
	return 0;
}