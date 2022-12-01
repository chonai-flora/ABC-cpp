#include <iostream>
#include <set>
using namespace std;
using ll = long long;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    ll n, p, q, r, a, sum = 0;
    cin >> n >> p >> q >> r;
    set<ll> s({0});
    for (int i = 0; i < n; i++) {
        cin >> a;
        s.insert(sum += a);
    }
    for (auto x : s) {
        if (s.find(x + p) != s.end() &&
            s.find(x + p + q) != s.end() &&
            s.find(x + p + q + r) != s.end()) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}