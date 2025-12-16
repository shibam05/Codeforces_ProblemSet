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
        int n;
        cin >> n;
        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        // suffix sum
        for (int i = n - 1; i >= 1; i--)
        {
            cnt[i] += cnt[i + 1];
        }

        int res = 0;
        for (int i = 1; i <= n; i++) // boundary (1≤ai≤n)
        {
            if (cnt[i] >= i)
            {
                res = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}