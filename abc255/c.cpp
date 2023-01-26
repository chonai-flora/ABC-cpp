#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll x, a, d, n, m, y, z, ans;
    cin >> x >> a >> d >> n;
    if (d == 0){
        cout << abs(a - x) << "\n";
        return 0;
    }
    m = a + (n - 1) * d;
    y = a + (x - a) / d * d;
    ans = min(abs(a - x), abs(m - x));
    for (ll i = -2; i <= 2; i++) {
        z = y + i * d;
        if (a <= z && z <= m || m <= z && z <= a) {
            ans = min(ans, abs(z - x));
        }
    }
    cout << ans << "\n";
    return 0;
}