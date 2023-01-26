#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int k;
    cin >> k;
    string ans;
    for (int i = 0; i < k; i++) {
        ans += (char)('A' + i);
    }
    cout << ans << "\n";
    return 0;
}