#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m, a, mod = 1e9 + 7;
    cin >> n >> m;
    vector<int> dp(n + 2, 0);
    unordered_map<int, bool> mp;
    for (int i = 0; i < m; i++) {
        cin >> a;
        mp[a] = 1;
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 3; j++) {
            if (!mp[i + j]) {
                dp[i + j] = (dp[i + j] + dp[i]) % mod;
            }
        }
    }
    cout << dp[n] % mod << "\n";
    return 0;
}