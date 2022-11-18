#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
  	int ans = s.rfind("a");
    cout << (ans == string::npos ? -1 : ans + 1) << "\n";
    return 0;
}