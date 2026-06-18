#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    int arr[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    int del = 0;
    int curr = a * arr[0] / total;
    if (curr >= b)
    {
        cout << del << endl;
        return 0;
    }

    sort(arr + 1, arr + n);
    for (int i = 1; i < n; i++)
    {
        total -= arr[i];
        del++;
        int curr = a * arr[0] / total;
        if (curr >= b)
        {
            break;
        }
    }
    cout << del << endl;

    return 0;
}