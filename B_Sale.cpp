#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a; // store negative elements only , so no size in initialization
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < 0)
        {
            a.push_back(num);
        }
    }

    sort(a.begin(), a.end());
    int res = 0;
    int i = 0;

    while (true)
    {
        if (m == 0 || i >= a.size())
            break;
        res += -a[i];
        i++;
        m--;
    }

    cout << res << "\n";
    return 0;
}