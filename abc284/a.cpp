#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto& t : s) cin >> t;
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        cout << *it << "\n";
    }
    return 0;
}