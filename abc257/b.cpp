#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, k, q, l;
    cin >> n >> k >> q;
    vector<int> a(k);
    for (auto& i : a) cin >> i;
    for (int i = 0; i < q; i++) {
        cin >> l;
        a[l - 1] += (a[l - 1] != n && a[l] != a[l - 1] + 1);
    }
    for (int i = 0; i < k; i++) {
        cout << a[i] << (i == k - 1 ? "\n" : " ");
    }
    return 0;
}