#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cows = 0, chickens = 0;

        if (n % 4 == 0) // only add cows to get minimum result
        {
            cows = n / 4;
        }
        else
        {
            cows = n / 4;
            chickens = (n % 4) / 2;
        }
        int res = cows + chickens;
        cout << res << endl;
    }

    return 0;
}