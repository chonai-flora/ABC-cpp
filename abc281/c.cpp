#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n, t, sum = 0, idx = 0;
    cin >> n >> t;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
        sum += i;
    }
    t %= sum;
    while (t - a[idx] > 0) {
        t -= a[idx++];
    }
    cout << idx + 1 << " " << t << "\n";
    return 0;
}