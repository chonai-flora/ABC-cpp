#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, s, sum = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        ans = s - sum;
        cout << ans << " ";
        sum += ans;
    }
    cout << "\n";
    return 0;
}