#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    char start = 0;
    vector<pair<int, int>> o;
    int dx[4] = {1, 1, 0, -1}, dy[4] = {0, 1, 1, 1};
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < n; j++) {
            start = max(a[i][j], start);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] == start) {
            	o.push_back({i, j});
            }
        }
    }  	
    long long ans = 0;
    for (auto& [x0, y0] : o) {
        for (int i = 0; i < 4; i++) {
            string s;
            for (int j = 1; j < n; j++) {
                s += a[(j * dx[i] + x0 + n) % n][(j * dy[i] + y0 + n) % n];
            }
            ans = max(ans, stoll(start + s));
            reverse(s.begin(), s.end());
            ans = max(ans, stoll(start + s));
        }
    }
    cout << ans << "\n";
    return 0;
}