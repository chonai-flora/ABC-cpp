#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, xy[2], z, in;
    cin >> n >> xy[0] >> xy[1] >> z;
    map<int, bool> ans;
    map<int, int> sum;
    map<int, vector<int>> mp[2];
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> in;
            mp[i][in].push_back(j);
            sum[j] += in;
        }
        for (auto it = mp[i].rbegin(); it != mp[i].rend() && xy[i]; it++) {
            for (auto k : it->second) {
                if (ans[k] == 0) {
                    ans[k] = 1;
                    if (--xy[i] <= 0) break;
                }
            }
        }
    }
    map<int, set<int>> swapped;
    for (auto it = sum.begin(); it != sum.end(); it++) {
        swapped[it->second].insert(it->first);
    }
    for (auto it = swapped.rbegin(); it != swapped.rend() && z; it++) {
        for (auto i : it->second) {
            if (ans[i] == 0) {
                ans[i] = 1;
                if (--z <= 0) break;
            }
        }
    }
    for (auto it = ans.begin(); it != ans.end(); it++) {
        cout << it->first << "\n";
    }
    return 0;
}