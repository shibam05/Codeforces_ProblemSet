#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int t;
    cin >> t;
    int p = 0;
    int res = INT_MIN;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        p += b - a;
        res = max(res, p);
    }
    cout << res << '\n';
    return 0;
}
