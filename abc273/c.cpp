#include <iostream>
#include <map>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, a;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
    }
    for (auto it = mp.rbegin(); it != mp.rend(); it++) {
        cout << it->second << "\n";
    }
    for (int i = 0; i < n - (int)mp.size(); i++) {
        cout << "0\n";
    }
    return 0;
}