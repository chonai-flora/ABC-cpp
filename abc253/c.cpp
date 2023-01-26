#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int q, n, x, c;
    map<int, int> mp;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> n;
        if (n == 1) {
            cin >> x;
            mp[x]++;
        }
        else if (n == 2) {
            cin >> x >> c;
            mp[x] -= min(c, mp[x]);
            if (mp[x] == 0) {
                mp.erase(mp.find(x));
            }
        }
        else {
            cout << mp.rbegin()->first - mp.begin()->first << "\n";
        }
    }
    return 0;
}