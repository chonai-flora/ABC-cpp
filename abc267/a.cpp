#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    unordered_map<string, int> ans = {
        {"Monday", 5},
        {"Tuesday", 4},
        {"Wednesday", 3},
        {"Thursday", 2},
        {"Friday", 1},
    };
    cout << ans[s] << "\n";
    return 0;
}