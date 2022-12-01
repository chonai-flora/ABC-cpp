#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int x, y, n;
	cin >> x >> y >> n;
	int a = n / 3, b = n - a * 3;
	cout << min(a * y + b * x, n * x) << "\n";
	return 0;
}