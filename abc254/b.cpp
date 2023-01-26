#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            a[i][j] = j == 0 || j == i
                          ? 1
                          : a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j != 0) cout << ' ';
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}