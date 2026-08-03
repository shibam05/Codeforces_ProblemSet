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
        string s;
        cin >> s;
        bool c0 = false, c1 = false;
        for (char ch : s)
        {
            if (!c0 && ch == '0')
            {
                c0 = true;
                continue;
            }
            if (!c1 && ch == '1')
            {
                c1 = true;
                continue;
            }
            cout << ch;
        }
        cout << '\n';
    }
    return 0;
}
