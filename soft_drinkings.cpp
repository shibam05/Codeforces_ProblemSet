#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int i = 0;

    int toasts = k * l / nl;
    int slices = c * d;
    int salt = p / np;

    int res = min(min(toasts, slices), salt) / n;

    cout << res << endl;

    return 0;
}