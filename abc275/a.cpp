#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, h, max = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> h;
        if (max < h) {
            max = h;
            ans = i;
        }
    }
    cout << ans + 1 << "\n";
    return 0;
}