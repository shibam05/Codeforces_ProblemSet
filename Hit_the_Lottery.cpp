#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bills[5] = {100, 20, 10, 5, 1};

    int dollars = n;
    int i = 0;
    int res = 0;

    while (dollars > 0)
    {
        if (dollars >= bills[i])
        {
            res += (dollars / bills[i]);
            dollars -= bills[i] * (dollars / bills[i]);
        }
        else
            i++;
    }

    cout << res << endl;

    return 0;
}