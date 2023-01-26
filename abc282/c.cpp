#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    string s;
    cin >> n >> s;
    bool isWrapped = 0;
    for (auto& c : s) {
        if (c == '"') {
            isWrapped = !isWrapped;
        }
        if (!isWrapped && c == ',') {
            c = '.';
        }
    }
    cout << s << "\n";
    return 0;
}