#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	ll n, x, a, b, sum = 0, ans = numeric_limits<ll>::max();
	cin >> n >> x;
	for (int i = 0; i < n && i + 1 <= x; i++) {
		cin >> a >> b;
		sum += a + b;
		ans = min(ans, sum + b * (x - i - 1));	
	}
	cout << ans << "\n";
	return 0;
}