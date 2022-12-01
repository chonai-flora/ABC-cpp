#include <iostream>
#include <vector>
using namespace std;
using grid = vector<vector<int>>;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int h[2] = { 0 }, w[2] = { 0 };
    grid v[2];
    for (int i = 0; i < 2; i++) {
        cin >> h[i] >> w[i];
        v[i].assign(h[i], vector<int>(w[i]));
        for (auto& p : v[i]) {
            for (auto& q : p) {
                cin >> q;
            }
        }
    }
    grid a(v[0]), b(v[1]);
    for (int i = 0; i < (1 << h[0]); i++) {
        for (int j = 0; j < (1 << w[0]); j++) {
            vector<int> p, q;
            for (int k = 0; k < h[0]; k++) {
                if (i >> k & 1) p.push_back(k);
            }
            for (int l = 0; l < w[0]; l++) {
                if (j >> l & 1) q.push_back(l);
            }
            if ((int)p.size() != h[1] || (int)q.size() != w[1]) continue;
            grid c(h[1], vector<int>(w[1]));
            for (int k = 0; k < h[1]; k++) {
                for (int l = 0; l < w[1]; l++) {
                    c[k][l] = a[p[k]][q[l]];
                }
            }
            if (b == c) {
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";
    return 0;
}