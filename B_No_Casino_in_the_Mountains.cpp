// Problem: No Casino in the Mountains
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
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int idx = 0; idx < n; idx++)
        {
            cin >> nums[idx];
        }

        int res = 0;
        int i = 0;

        while (i <= n - k)
        {
            bool good_k_days = true;
            for (int j = i; j < i + k; j++)
            {
                if (nums[j] == 1)
                {
                    good_k_days = false;
                    break;
                }
            }

            if (good_k_days)
            {
                res++;
                i += k + 1;
            }
            else
                i++;
        }
        cout << res << endl;
    }
    return 0;
}