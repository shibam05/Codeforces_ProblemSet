#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(m + 1, 0); // initially all bulbs are OFF
    int btnNum, bulbNum;
    for (int i = 0; i < n; i++)
    {
        cin >> btnNum;
        for (int j = 0; j < btnNum; j++)
        {
            cin >> bulbNum;
            a[bulbNum] = 1; // bulb turned ON
        }
    }

    if (accumulate(a.begin(), a.end(), 0) == m)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}