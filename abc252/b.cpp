#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, k, a, b;
    cin >> n >> k;
    map<int, set<int>> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a].insert(i + 1);
    }
    set<int> st = mp.rbegin()->second;
    for (int i = 0; i < k; i++) {
        cin >> b;
        if (st.find(b) != st.end()) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}