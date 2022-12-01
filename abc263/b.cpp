#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> p(n - 1);
    for (auto& i : p) cin >> i;
    vector<int> ans(n--);
    for (int i = 0; i < n; i++) {
        ans[i + 1] = ans[p[i] - 1] + 1;
    }
    cout << ans[n] << endl;
    return 0;
}