#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    float sum = 0;
    for (int i : p)
    {
        sum += i / 100.0;
    }
    float res = (sum / n) * 100.0;
    cout << res << "\n";
    return 0;
}