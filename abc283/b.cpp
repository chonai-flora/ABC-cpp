#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, q, query, k, x;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> query;
        if (query == 1) {
            cin >> k >> x;
            a[k - 1] = x;
        }
        else {
            cin >> k;
            cout << a[k - 1] << "\n";
        }
    }
    return 0;
}