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
        vector<int> arr(n);
        bool even_is = false, odd_is = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even_is = true;
            else
                odd_is = true;
        }

        if (even_is && odd_is)
            sort(arr.begin(), arr.end());

        for (int x : arr)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
