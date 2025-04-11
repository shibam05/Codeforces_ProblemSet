#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        if (n == 2)
        {
            if (nums[0] % 2 == nums[1] % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            int oddsum = 0, evensum = 0;
            for (int n : nums)
            {
                if (n % 2 == 0)
                    evensum += n;
                else
                    oddsum += n;
            }
            if (evensum % 2 == oddsum % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}