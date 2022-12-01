#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    string s, ans;
    cin >> s;
    if (s[0] == s[1] && s[1] == s[2]) ans = "-1";
    else if (s[1] == s[2]) ans = s[0];
    else if (s[2] == s[0]) ans = s[1];
    else ans = s[2];
    cout << ans << "\n";
    return 0;
}