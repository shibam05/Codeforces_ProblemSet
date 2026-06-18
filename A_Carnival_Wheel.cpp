#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = 0;
        int currmax = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < currmax)
                res++;
            else
                currmax = arr[i];
        }
        cout << res << endl;
    }
    return 0;
}