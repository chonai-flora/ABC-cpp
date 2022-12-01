#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    for (auto &u : s) cin >> u;
    for (auto &u : t) cin >> u;
    vector<string> p(w), q(w);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            p[j].push_back(s[i][j]);
            q[j].push_back(t[i][j]);
        }
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    cout << (p == q ? "Yes\n" : "No\n");
    return 0;
}