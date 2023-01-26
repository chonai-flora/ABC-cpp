#include <cstdio>
#include <cmath>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

ll sq(ll n) {
    return n * n;
}

int main() {
    int n, k;
    scanf("%lld%lld", &n, &k);
    vector<ll> a(k);
    for (auto& i : a) {
        scanf("%d", &i);
        i--;
    }
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) {
        scanf("%lld%lld", &x[i], &y[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ll m = numeric_limits<ll>::max();
        for (auto& j : a) {
            m = min(m, sq(x[i] - x[j]) + sq(y[i] - y[j]));
        }
        ans = max(ans, m);
    }
    printf("%.12lf\n", sqrt((double)ans));
    return 0;
}