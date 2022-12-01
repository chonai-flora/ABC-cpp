#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<bool> a(m, 0);
    for (int i = n; i < m; i++) a[i] = 1;
    do {
        for (int i = 0; i < m; i++) {
            if (!a[i]) {
                cout << i + 1 << " ";
            }
        }
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));
    return 0;
}