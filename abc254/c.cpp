#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    for (int i = 0; i < k; i++) {
        vector<int> b;
        for (int j = i; j < n; j += k) {
            b.push_back(a[j]);
        }
        sort(b.begin(), b.end());
        int idx = 0;
        for (int j = i; j < n; j += k) {
            a[j] = b[idx++];
        }
    }
    cout << (is_sorted(a.begin(), a.end()) ? "Yes\n" : "No\n");
    return 0;
}