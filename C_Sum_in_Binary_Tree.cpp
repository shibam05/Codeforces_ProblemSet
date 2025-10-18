#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int res = 0;
        while (n > 0)
        {
            res += n;
            n = n >> 1;
        }
        cout << res << endl;
    }
    return 0;
}