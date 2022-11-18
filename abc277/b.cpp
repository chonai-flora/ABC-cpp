#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#define ALL(v) v.begin(), v.end()
using namespace std;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    set<string> st;
    string a = "HDCS", b = "A23456789TJQK";
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (!count(ALL(a), s[0]) ||
            !count(ALL(b), s[1]) ||
            st.find(s) != st.end()) {
            cout << "No\n";
            return 0;
        }
        st.insert(s);
    }
    cout << "Yes\n";
    return 0;
}