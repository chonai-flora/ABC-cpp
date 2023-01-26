#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < i; j++) {
            int cnt = 0;
            for (int k = 0; k < m; k++) {
                cnt += s[i][k] == 'o' || s[j][k] == 'o';
            }
            ans += cnt == m;
        }
    }
    cout << ans << "\n";
    return 0;
}