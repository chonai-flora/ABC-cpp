#include <iostream>
#include <unordered_map>
using namespace std;
using ll = long long;

unordered_map<ll, ll> memo;

ll f(ll x) {
    if (memo[x] == 0) {
        memo[x] = f(x / 2.) + f(x / 3.);
    }
    return memo[x];
}

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll n;
    cin >> n;
    memo[0] = 1;
    cout << f(n) << "\n";
    return 0;
}