#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    cout << t - max(x - m, 0) * d << "\n";
    return 0;
}