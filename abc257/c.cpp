#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, x, ans = 0;
    string s;
    cin >> n >> s;
    vector<pair<int, int>> w(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        w[i] = { x, s[i] };
        ans += s[i] == '1';
    }
    sort(w.begin(), w.end());
    x = ans;
    for (int i = 0; i < n; i++) {
        x += (w[i].second == '1' ? -1 : 1);
        if (i + 1 >= n || w[i].first != w[i + 1].first) {
            ans = max(ans, x);
        }
    }
    cout << ans << "\n";
    return 0;
}