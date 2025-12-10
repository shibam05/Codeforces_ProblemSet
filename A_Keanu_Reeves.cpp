#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int bal = 0;
    for (char c : s)
    {
        if (c == '0')
            bal++;
        else
            bal--;
    }

    if (bal != 0)
    {
        cout << 1 << endl
            << s << endl;
    }
    else
    {
        cout << 2 << endl
            << s.substr(0, n - 1) << " " << s.substr(n - 1) << endl;
    }

    return 0;
}
