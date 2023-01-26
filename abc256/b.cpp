#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n, in, p = 0;
    cin >> n;
    int piece[4] = { 0 }, exists[4] = { 0 };
    for (int i = 0; i < n; i++) {
        cin >> in;
        exists[i % 4] = 1;
        for (int i = 0; i < 4; i++) {
            if (exists[i]) {
                piece[i] += in;
                if (piece[i] > 3) {
                    p++;
                    piece[i] = exists[i] = 0;
                }
            }
        }
    }
    cout << p << "\n";
    return 0;
}