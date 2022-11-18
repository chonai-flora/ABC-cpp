#include <iostream>
using namespace std;
using ll = long long;
ll MOD = 998244353;

ll mod(ll n) { return n % MOD; }

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    x = mod(mod(mod(a) * mod(b)) * mod(c));
    y = mod(mod(mod(d) * mod(e)) * mod(f));
    cout << mod(x - y + MOD) << "\n";
    return 0;
}