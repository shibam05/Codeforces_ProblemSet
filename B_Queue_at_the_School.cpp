#include <bits/stdc++.h>
using namespace std;

void eval(string &s, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'G')
        {
            swap(s[i], s[i + 1]);
            i++;
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    string s;
    cin >> n >> t >> s;
    string res = s;
    while (t--)
    {
        eval(res, n);
    }

    cout << res << endl;
    return 0;
}
