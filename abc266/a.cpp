#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
	string s;
	cin >> s;
	cout << s[(s.size() + 1) / 2 - 1] << "\n";
	return 0;
}