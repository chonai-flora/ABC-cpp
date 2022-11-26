#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s, t;
    cin >> s >> t;
    cout << (s == t.substr(0, (int)s.size())
                 ? "Yes\n"
                 : "No\n");
    return 0;
}