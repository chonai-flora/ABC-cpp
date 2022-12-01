#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <bitset>
#include <unordered_map>
using namespace std;

struct pos { int x; int y; };

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int h, w, i = 0, j = 0;
	cin >> h >> w;
	vector<string> g(h);
	for (auto& s : g) cin >> s;
    unordered_map<char, pos> delta = {
        {'U', {0, -1}},
        {'D', {0, 1}},
        {'L', {-1, 0}},
        {'R', {1, 0}}
    };
    bitset<500 * 500> grid;
    while (!grid[i * h + j % w]) {
        char c = g[i][j];
        grid.set(i * h + j % w);
        i += delta[c].y;
        j += delta[c].x;
        if (i < 0 || i >= h) {
            cout << abs(i) << " " << j + 1 << "\n";
            return 0;
        }
        if (j < 0 || j >= w) {
            cout << i + 1 << " " << abs(j) << "\n";
            return 0;
        }
	}
	cout << -1 << "\n";
	return 0;
}