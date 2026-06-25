#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int maxi = INT_MIN, mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }

        cout << maxi - mini + 1 << endl;
    }

    return 0;
}