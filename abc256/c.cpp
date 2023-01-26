#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h1, h2, h3, w1, w2, w3;
    int ans = 0, m, n, o, p, q;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    for (int i = 1; i <= 30; i++) {
        for (int j = 1; j <= 30; j++) {
            for (int k = 1; k <= 30; k++) {
                for (int l = 1; l <= 30; l++) {
                    m = h1 - i - j;
                    n = h2 - k - l;
                    o = w1 - i - k;
                    p = w2 - j - l;
                    q = w3 - m - n;
                    ans += (min({m, n, o, p, q}) > 0 && o + p + q == h3);
                }
            }
        }
    }
  	cout << ans << "\n";
    return 0;
}