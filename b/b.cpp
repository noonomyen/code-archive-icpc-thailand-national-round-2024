#pragma GCC optimize("O2")

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    char m[10][5] = {
        " ",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };

    int mm[10] = { 1, 0, 2, 2, 2, 2, 2, 3, 2, 3 };

    string g, o;
    bool gp = false;
    int p = 0;
    int b = 0;
    for (auto c : s) {
        c -= 48;
        if (c == p && b == mm[c]) {
            g.push_back(m[p][b]);
            gp = true;
            b = 0;
        } else if (c != p) {
            if (gp) {
                gp = false;
                g.push_back(m[p][b]);
                ranges::sort(g);
                o += g;
                g.clear();
            } else {
                o.push_back(m[p][b]);
            }
            p = c;
            b = 0;
        } else {
            b++;
        }
    }

    if (gp) {
        g.push_back(m[p][b]);
        ranges::sort(g);
        o += g;
    } else {
        o.push_back(m[p][b]);
    }

    cout << o.substr(1) << endl;

    return 0;
}
