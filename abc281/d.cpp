#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vll = vector<long long>;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, k, d;
    cin >> n >> k >> d;
    vll a(n);
    for (auto& i : a) cin >> i;
    vector<vector<vll>> dp(n + 1, vector<vll>(k + 1, vll(d, -1)));
    dp[0][0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int l = 0; l < d; l++) {
                if (dp[i][j][l] == -1) continue;
                dp[i + 1][j][l] = max(dp[i + 1][j][l], dp[i][j][l]);
                if (j != k) {
                    dp[i + 1][j + 1][(l + a[i]) % d] = max(dp[i + 1][j + 1][(l + a[i]) % d], dp[i][j][l] + a[i]);
                }
            }
        }
    }
    cout << dp[n][k][0] << "\n";
    return 0;
}