#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    int res = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (nums[j] >= nums[k - 1] && nums[j] > 0)
            res++;
    }

    cout << res << endl;

    return 0;
}