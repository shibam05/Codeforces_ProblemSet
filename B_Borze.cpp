#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string res = "";
    int i = 0;
    int n = s.size();

    while (i < n)
    {
        if (s[i] == '.')
        {
            res += "0";
            i++;
        }
        else if (s[i] == '-')
        {
            if ((s[i + 1] == '-') && (i + 1) < n)
            {
                res += "2";
                i += 2;
            }
            else
            {
                res += "1";
                i += 2;
            }
        }
    }

    cout << res << endl;
    return 0;
}
