#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, l;
    string s;
    cin >> n >> s;
    for (int i = 1; i < n; i++) {
        for (l = 0; l + i < n && s[l] != s[l + i]; l++);
        cout << l << "\n";
    }
    return 0;
}