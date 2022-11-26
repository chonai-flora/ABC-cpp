#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    bool bits[10] = { 0 };
    for (int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        bits[i] = (bool)(c - '0');
    }
    if (bits[0]) {
        cout << "No\n";
        return 0;
    }
    bool row1[7] = {
            bits[6], bits[3],
            bits[1] && bits[7], bits[4],
            bits[2] && bits[8], bits[5], bits[9]},
        row2[7] = {
            bits[6], bits[3],
            bits[1] || bits[7], bits[4],
            bits[2] || bits[8], bits[5], bits[9]};
    int cnt = 0;
    for (int i = 0; i < 7; i++) {
        if ((cnt == 0 && row1[i]) ||
            (cnt == 1 && !row2[i]) ||
            (cnt == 2 && row1[i])) {
            cnt++;
        }
    }
    cout << (cnt == 3 ? "Yes\n" : "No\n");
    return 0;
}