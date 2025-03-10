#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> nums(5, vector<int>(5, 0));
    int res = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> nums[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (nums[i][j] != 0)
                res = abs(2 - i) + abs(2 - j);
        }
    }

    cout << res << endl;

    return 0;
}