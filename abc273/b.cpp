#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    ll x, k;
    cin >> x >> k;
    ll y = pow(10, k);
    cout << ((x + (y / 9) * 5) / y) * y << "\n";
    return 0;
}