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
        int nums[n];
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        int res = 0;
        bool inSegment = false;

        for (int r = 0; r < n; r++)
        {
            if (nums[r] > 0)
            {
                if (!inSegment)
                {
                    res++;
                    inSegment = true;
                }
            }
            else
            {
                inSegment = false;
            }
        }
        cout << min(res, 2) << '\n';
    }

    return 0;
}