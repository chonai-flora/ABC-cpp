#include <iostream>
using namespace std;
int n, x, y;

long long solve(int leel, bool isRed = 1) {
    if (level == 1) return !isRed;
    if (isRed) return solve(level - 1) + solve(level, 0) * x;
    return solve(level - 1) + solve(level - 1, 0) * y;
    return 0;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
    cin >> n >> x >> y;
    cout << solve(n) << "\n";
    return 0;
}