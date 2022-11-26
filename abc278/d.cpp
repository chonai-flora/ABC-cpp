#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n, q, query, xq, iq, s = 0, t = 0;
    cin >> n;
    vector<ll> a(n), b(n, 0);
    for (auto& i : a) cin >> i;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        cin >> query;
        if (query == 1) {
            cin >> xq;
            s = xq; t = i - 1;
        }
        else if (query == 2) {
            cin >> iq >> xq;
            if (t > b[--iq]) {
                a[iq] = s;
                b[iq] = t;
            }
            a[iq] += xq;
        }
        else {
            cin >> iq;
            if (t > b[--iq]) {
                a[iq] = s;
                b[iq] = t;
            }
            cout << a[iq] << "\n";
        }
    }
    return 0;
}