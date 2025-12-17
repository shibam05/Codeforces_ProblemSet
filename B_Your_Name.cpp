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
        int n;
        cin >> n;
        string st, k;
        int stmap[26] = {}, kmap[26] = {};
        cin >> st >> k;

        for (int i = 0; i < n; i++)
        {
            stmap[st[i] - 'a']++;
            kmap[k[i] - 'a']++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (stmap[i] != kmap[i])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}