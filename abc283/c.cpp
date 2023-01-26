#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int ans = (int)s.size();
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i - 1] == '0' && s[i] == '0') {
            ans--;
            i++;
        }
    }
    cout << ans << "\n";
    return 0;
}