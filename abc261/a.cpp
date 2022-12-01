#include <iostream>
#include <bitset>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    bitset<100> o;
    auto a1 = ~(~o << (r1 - l1)) << l1;
    auto a2 = ~(~o << (r2 - l2)) << l2;
    cout << (a1 & a2).count() << '\n';
    return 0;
}