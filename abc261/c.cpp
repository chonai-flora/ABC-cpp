#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n;
    cin >> n;
	unordered_map<string, int> cnt;
	for (int i = 0; i < n; i++) {
		string s; 
        cin >> s;
		string sub = "(" + to_string(cnt[s]) + ")\n";
		cout << s << (cnt[s]++ == 0 ? "\n" : sub);
	}
	return 0;
}