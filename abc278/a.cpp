#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, k, a;
    cin >> n >> k;
    for (int i = 0; i < n + k; i++) {
        cin >> a;
        if (i >= k) {
            cout << (i < n ? a : 0) << " ";
        }
    }
    cout << "\n";
    return 0;
}