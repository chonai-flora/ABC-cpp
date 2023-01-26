#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int test, ans = 0;
        for (int j = 0; j < n; j++) {
            cin >> test;
            ans += test % 2 != 0;
        }
        cout << ans << "\n";
    }
    return 0;
}