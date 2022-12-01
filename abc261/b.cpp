#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    unordered_map<int, unordered_map<int, int>> table;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        for (int j = 0; j < n; j++) {
            table[i][j] = a[j] == 'W'
                        ? 1 : a[j] == 'L'
                        ? -1 : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(table[i][j] != -table[j][i]) {
               cout << "incorrect\n";
               return 0;
           }
        }
    }
    cout << "correct\n";
    return 0;
}