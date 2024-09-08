#pragma GCC optimize("O2")

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f;
    float g, h;
    int i, j, k, l, m, n;

    cin >> a >> b >> c >> d >> e >> f;

    g = (c + e) / 2.0f;
    h = (d + f) / 2.0f;
    i = (g - a) + g;
    j = (h - b) + h;

    g = (e + a) / 2.0f;
    h = (f + b) / 2.0f;
    k = (g - c) + g;
    l = (h - d) + h;

    g = (a + c) / 2.0f;
    h = (b + d) / 2.0f;
    m = (g - e) + g;
    n = (h - f) + h;

    cout << k << ' ' << l << endl;
    cout << m << ' ' << n << endl;
    cout << i << ' ' << j << endl;

    return 0;
}
