#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

struct vec { int x; int y; };

int dist(vec v, vec u){
    return (v.x - u.x) * (v.x - u.x) + (v.y - u.y) * (v.y - u.y);
}

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    vector<string> s(9);
    for (auto &t : s) cin >> t;
    int ans = 0;
    for (int i = 0; i < 81; i++){
        for (int j = i + 1; j < 81; j++){
            for (int k = j + 1; k < 81; k++){
                for (int l = k + 1; l < 81; l++){
                    vec a{i / 9, i % 9},
                        b{j / 9, j % 9},
                        c{k / 9, k % 9},
                        d{l / 9, l % 9};
                    if (s[a.x][a.y] == '.' || s[b.x][b.y] == '.' ||
                        s[c.x][c.y] == '.' || s[d.x][d.y] == '.') {
                            continue;
                    }

                    map<int, int> mp;
                    mp[dist(a, b)]++;
                    mp[dist(a, c)]++;
                    mp[dist(a, d)]++;
                    mp[dist(b, c)]++;
                    mp[dist(b, d)]++;
                    mp[dist(c, d)]++;
                    if (mp[0] > 0) continue;

                    int cnt = 0, key = 0;
                    for (auto it = mp.begin(); it != mp.end(); it++) {
                        if (++cnt == 2) key = it->first;
                    }
                    ans += (mp[key] == 4 && mp[key * 2] == 2);
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}