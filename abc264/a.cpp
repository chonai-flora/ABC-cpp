#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
    int l, r;
    cin >> l >> r;
    string s = "atcoder"; 
    cout << s.substr(l - 1, r - l + 1) << "\n";
    return 0;
}