#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);

    string from, to, s;
    cin >> from >> to >> s;

    int charmap[26];
    for (int i = 0; i < 26; i++)
    {
        charmap[from[i] - 'a'] = to[i] - 'a';
    }

    string res = s;
    for (int i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            continue;
        }
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            res[i] = 'a' + charmap[s[i] - 'a'];
        }
        else
            res[i] = 'A' + charmap[s[i] - 'A'];
    }

    cout << res << endl;
    return 0;
}