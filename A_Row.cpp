#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int n;
    string s;
    cin >> n >> s;

    // Check for adjacent 1s
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            cout << "No" << endl;
            return 0;
        }
    }

    // Check for isolated 0s
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            bool hasAdjacentOne = false;

            // Check left neighbor
            if (i > 0 && s[i - 1] == '1')
            {
                hasAdjacentOne = true;
            }

            // Check right neighbor
            if (i + 1 < n && s[i + 1] == '1')
            {
                hasAdjacentOne = true;
            }

            // If no adjacent 1, then this 0 is isolated
            if (!hasAdjacentOne)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}