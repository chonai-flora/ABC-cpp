#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
using d = double;
using ll = long long;

int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    auto f = [&](ll n) -> d {
        return (d)a / sqrt(n + 1) + (d)b * n;
    };
    ll argMin = pow((d)a / (2 * b), 2. / 3.) - 1;
    ll l = max(argMin - 5, 0LL), r = min(argMin + 5, a / b);
    d ans = a;
    for (ll i = l; i <= r; i++) {
        ans = min(ans, f(i));
    }
    printf("%.10lf\n", ans);
    return 0;
}