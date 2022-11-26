#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, a, ans = 0;
    cin >> n;
    unordered_set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a;
        st.insert(a);
    }
    while(n >= 0){
        n -= !st.count(++ans) + 1;
    }
    cout << ans - 1 << "\n";
    return 0;
}