#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n + 1);
    map<string, string> name;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> s[i + 1];
        name[s[i]] = s[i + 1];
    }
    set<string> used;
    for (auto& a : s) {
        string b = a;
        while (!used.count(b)) {
            used.insert(b);
            auto it = name.find(b);
            if (it == name.end()) break;
            b = it->second;
            if (b == a) {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}