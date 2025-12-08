#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        int l, r;
        char c1, c2;
        cin >> l >> r >> c1 >> c2;
        for (int k = l - 1; k <= r - 1; k++)
        {
            if (s[k] == c1)
            {
                s[k] = c2;
            }
        }
    }
    cout << s << endl;
    return 0;
}
