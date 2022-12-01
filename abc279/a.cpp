#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    cout << count(s.begin(), s.end(), 'v') + count(s.begin(), s.end(), 'w') * 2 << "\n";
    return 0;
}