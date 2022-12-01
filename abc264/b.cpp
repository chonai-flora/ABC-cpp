#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    int r, c;
    cin >> r >> c;
    cout << ((int)fmax(abs(r - 8), abs(c - 8)) % 2 == 0
                 ? "white\n"
                 : "black\n");
    return 0;
}