#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;
    if (s.size() != t.size())
    {
        cout << "NO" << '\n';
        return 0;
    }
    int n = s.size();
    bool rev = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - i - 1])
        {
            rev = false;
            break;
        }
        else
            continue;
    }

    cout << (rev ? "YES" : "NO") << '\n';
    return 0;
}