#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
	int n, g = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		g = gcd(g, a[i]);
	}
	for (int i = 0; i < n; i++) {
		a[i] /= g;
		while (a[i] % 6 == 0) {
			a[i] /= 6;
			ans += 2;
		}
		while (a[i] % 3 == 0) {
			a[i] /= 3;
			ans++;
		}
		while (a[i] % 2 == 0) {
			a[i] /= 2;
			ans++;
		}
		if (a[i] != 1) {
			cout << "-1\n";
			return 0;
		}
	}
    cout << ans << "\n";
    return 0;
}