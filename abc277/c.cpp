#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int, vector<int>> dist;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		dist[a].push_back(b);
		dist[b].push_back(a);
	}
	set<int> st;
	queue<int> stock;
	st.insert(1);
	stock.push(1);
	while (!stock.empty()) {
		int v = stock.front();
		stock.pop();
		for (auto& i : dist[v]) {
			if (!st.count(i)) {
				stock.push(i);
				st.insert(i);
			}
		}
	}
	cout << *st.rbegin() << "\n";
}