#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, q, l, m, s, t;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> l;
        for (int j = 0; j < l; j++) {
            cin >> m;
            a[i].push_back(m);
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        cout << a[s - 1][t - 1] << "\n";
    }
    return 0;
}