#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto& i : p) cin >> i;
    prev_permutation(p.begin(), p.end());
    for (auto i : p) cout << i << " ";
    cout << "\n";
    return 0;
}