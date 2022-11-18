#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    map<int, set<int>> mp;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        mp[a].insert(b);
        mp[b].insert(a);
    }
    for (int i = 1; i <= n; i++) {
        set<int> ans(mp[i]);
        cout << ans.size();
        for (auto it = ans.begin(); it != ans.end(); it++) {
            cout << " " << *it;
        }
        cout << "\n";
    }
    return 0;
}