#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m, k, x;
    cin >> n >> m;
    vector<vector<bool>> bits(n, vector<bool>(n, 0));
    for (int i = 0; i < m; i++) {
        cin >> k;
        vector<int> a(k);
        for (auto& j : a) cin >> j;
        for (int j = 0; j < (int)a.size() - 1; j++) {
            for (int l = j + 1; l < (int)a.size(); l++) {
                bits[a[j] - 1][a[l] - 1] = 1;
            }
        } 
    }
    bool ans = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ans &= bits[i][j];
        }
    }
    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}