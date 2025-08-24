#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool allOnes = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 1)
            {
                allOnes = false;
                break;
            }
        }

        bool hasConsecutiveZeros = false;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 0 && a[i - 1] == 0)
            {
                hasConsecutiveZeros = true;
                break;
            }
        }

        bool noLies = !allOnes && !hasConsecutiveZeros;
        cout << (noLies ? "NO" : "YES") << "\n";
    }
    return 0;
}