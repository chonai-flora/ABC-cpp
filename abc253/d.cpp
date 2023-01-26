#include <iostream>
using namespace std;
using ll = long long;

ll f(ll n) {
    return n * (n + 1) / 2;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n, a, b;
    cin >> n >> a >> b;
    ll l = a * b / gcd(a, b);
    cout << f(n) - a * f(n / a) - b * f(n / b) + l * f(n / l) << "\n";
    return 0;
}