#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, q, t, a, b;
    cin >> n >> q;
    unordered_map<int, unordered_map<int, bool>> user;
    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        if (t == 3){
            cout << (user[a][b] && user[b][a] ? "Yes\n" : "No\n");
        }
        else {
            user[a][b] = t == 1;
        }
    }
    return 0;
}