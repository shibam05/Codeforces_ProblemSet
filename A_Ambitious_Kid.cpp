#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int k = 0; k < n; k++)
        cin >> nums[k];
    int min_element = INT_MAX;
    for (int num : nums)
    {
        if (num == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        min_element = min(min_element, abs(num));
    }
    cout << min_element << endl;

    return 0;
}