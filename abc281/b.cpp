#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    cout << (isupper(s[0]) && s[1] != '0'
        && isdigit(s[2]) && isdigit(s[3])
        && isdigit(s[4]) && isdigit(s[5])
        && isdigit(s[6]) && isupper(s[7])
        ? "Yes\n"
        : "No\n");
    return 0;
}