#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n, q, t, x, shift = 0;
	string s;
    cin >> n >> q >> s;
	for (int i = 0; i < q; i++) {
        cin >> t >> x;
		if (t == 1) {
			shift = (shift + x) % n;
		}
		else {
			cout << s[(x - 1 - shift + n) % n] << "\n";
		}
	}
	return 0;
}