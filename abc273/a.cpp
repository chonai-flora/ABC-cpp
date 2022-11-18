#include <iostream>
using namespace std;

int f(int k) {
    return k == 0 ? 1 : k * f(k - 1);
}

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}