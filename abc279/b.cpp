#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m || cout << "Yes\n"; j++) {
            if (s[i + j] != t[j]) {
                break;
            }
        }
        if (j == m) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}