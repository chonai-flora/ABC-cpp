#include <iostream>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a <= b && b <= c || a >= b && b >= c
                 ? "Yes\n"
                 : "No\n");
    return 0;
}