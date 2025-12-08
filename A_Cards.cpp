#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int len;
    cin >> len;
    char ch;
    int z = 0, n = 0;

    for (int i = 0; i < len; i++)
    {
        cin >> ch;
        if (ch == 'n')
            n++;
        if (ch == 'z')
            z++;
    }

    for (int i = 0; i < n; i++)
        cout << "1 ";
    for (int i = 0; i < z; i++)
        cout << "0 ";

    return 0;
}