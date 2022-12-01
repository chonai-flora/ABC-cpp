#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int y;
    cin >> y;
    for (; y % 4 != 2; y++);
    cout << y << "\n";
    return 0;
}