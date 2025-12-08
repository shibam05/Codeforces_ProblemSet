#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    char ch;
    bool res = true;

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (i == 0 && ch != 'S')
            res = false;
        if (i == n - 1 && ch != 'F')
            res = false;
    }

    cout << (res ? "YES" : "NO") << "\n";
    return 0;
}