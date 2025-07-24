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
        int k;
        cin >> k;
        int y = INT_MAX;

        int num = k;
        while (num > 0)
        {
            y = min(y, num % 10);
            num /= 10;
        }
        cout << y << endl;
    }

    return 0;
}