#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int l = s.size();
    long long res = 1, add = 26, n = (s[0] - 'A');
    for (int i = 1; i < l; i++){
        res += add;
        add *= 26;
        n *= 26;
        n += (s[i] - 'A');
    }
    cout << res + n << "\n";
    return 0;
}