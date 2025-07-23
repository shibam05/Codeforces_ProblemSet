#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        int res = 0;
        int mid = a + b + c - max(a, max(b, c)) - min(a, min(b, c));
        res += abs(mid - a) + abs(mid - b) + abs(mid - c);
        cout << res << endl;
    }

    return 0;
}