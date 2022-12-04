#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll k, ans = 0;
    cin >> k;
    for (ll p = 2; p * p <= k; p++) {
        ll a = 0, n = 0, m = 0;
        while (k % p == 0) {
            k /= p;
            a++;
        }
        while (a > 0) {
            n += p;
            m = n;
            while (m % p == 0) {
                m /= p;
                a--;
            }
            ans = max(ans, n);
        }
    }
    cout << max(ans, k) << "\n";
    return 0;
}