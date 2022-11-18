#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int h, w;
    cin >> h >> w;
    vector<int> ans(w, 0);
    for (int i = 0; i < h; i++) {
        string c;
        cin >> c;
        for (int j = 0; j < w; j++) {
            ans[j] += (c[j] == '#');
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}