
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> nums[i][j];
        }
    }

    for (int j = 0; j < 3; j++)
    {
        int colsum = 0;
        for (int i = 0; i < n; i++)
        {
            colsum += nums[i][j];
        }
        if (colsum != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
