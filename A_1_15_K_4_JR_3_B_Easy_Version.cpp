#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int res;
        if (n & 1)
        {
            res = (n / 2) * (n / 2 + 1);
        }
        else
            res = n * n / 4;
        cout << res << endl;
    }

    return 0;
}