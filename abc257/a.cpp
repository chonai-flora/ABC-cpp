#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, x;
    cin >> n >> x;
    cout << (char)('A' + (x - 1) / n) << "\n";
    return 0;
}