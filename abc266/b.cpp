#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n, mod = 998244353;
    cin >> n;
    n %= mod;
    cout << (n < 0 ? n + mod : n) << "\n";
    return 0;
}