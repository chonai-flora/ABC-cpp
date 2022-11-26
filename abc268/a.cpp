#include <iostream>
#include <set>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    set<int> ans;
    for (int i = 0, in; i < 5; i++) {
        cin >> in;
        ans.insert(in);
    }
    cout << ans.size() << "\n";
    return 0;
}