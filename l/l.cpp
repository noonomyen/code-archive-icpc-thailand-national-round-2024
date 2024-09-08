#pragma GCC optimize("O2")

#include <bits/stdc++.h>

using namespace std;

int func(string &s) {
    string t;
    cin >> t;

    if (t.length() > s.length()) {
        return -1;
    } else if (t == s) {
        return 0;
    } else {
        int mr = INT32_MAX;

        for (int i = 0; i < s.length(); i++) {
            if (t[0] == s[i]) {
                int r = 0;
                int j = 0;

                for (int k = i; k < s.length(); k++) {
                    if (t[j] == s[k]) j++;
                    else r++;

                    if (j == t.length()) {
                        mr = min(mr, r);
                        break;
                    }
                }
            }
        }

        return (mr == INT32_MAX) ? -1 : mr;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int t;
    cin >> s >> t;
    while (t--) cout << func(s) << endl;

    return 0;
}
