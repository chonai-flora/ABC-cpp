#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int a, b, ans = 1;
    cin >> a >> b;
	for (int i = 0; i < b; i++) ans *= a;
	cout << ans << '\n';
    return 0;
}