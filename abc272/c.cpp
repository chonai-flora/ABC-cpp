#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m;
    cin >> n;
    vector<int> a[2];
    for (int i = 0; i < n; i++) {
        cin >> m;
        a[m % 2].push_back(m);
    }
    sort(a[0].rbegin(), a[0].rend());
    sort(a[1].rbegin(), a[1].rend());
    int x = (int)a[0].size() > 1 ? a[0][0] + a[0][1] : -1;
    int y = (int)a[1].size() > 1 ? a[1][0] + a[1][1] : -1;
    cout << max(x, y) << "\n";
    return 0;
}