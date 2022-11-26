#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& i : a) cin >> i;
    cout << accumulate(a.begin(), a.end(), 0) << "\n";
    return 0;
}