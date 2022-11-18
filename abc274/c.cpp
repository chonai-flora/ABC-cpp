#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> ans(2 * n + 1, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans[2 * i + 1] = ans[a - 1] + 1;
        ans[2 * i + 2] = ans[a - 1] + 1;
    }
    for(auto i : ans) cout << i << "\n";
    return 0;
}