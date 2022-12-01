#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	cin.tie(0)->ios::sync_with_stdio(0);
    int in;
    unordered_map<int, int> ans;
    for (int i = 0; i < 5; i++) {
        cin >> in;
        ans[in]++;
    }
    cout << ((int)ans.size() == 2 && ans[in] > 1 && ans[in] < 4
                 ? "Yes\n"
                 : "No\n");
    return 0;
}