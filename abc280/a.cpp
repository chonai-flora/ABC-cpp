#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h, w, ans = 0;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;
        ans += count(s.begin(), s.end(), '#');
    }
    cout << ans << "\n";
    return 0;
}