#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int i = 0;
        bool possible = true;

        while (i < n)
        {
            if (nums[i] == 0)
            {
                i++;
            }
            else
            {
                if (x == 0)
                {
                    possible = false;
                    break;
                }

                i += x;
                x = 0;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
