#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    vector<string> v((int)s.size());
    vector<bool> used((int)'z' + 1);
    auto it = v.begin();
    for (auto &c : s) {
        if (c == '(') it++;
        else if (c == ')') {
            for (auto d : *it) {
                used[d] = 0;
            }
            it->clear();
            it--;
        }
        else {
            if (used[c]) {
                cout << "No\n";
                return 0;
            }
            (*it) += c;
            used[c] = 1;
        }
    }
    cout << "Yes\n";
    return 0;
}