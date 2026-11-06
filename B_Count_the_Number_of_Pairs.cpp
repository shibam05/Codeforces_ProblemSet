#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        s.reserve(n);
        cin >> s;

        vector<int> big(26, 0), small(26, 0);
        for (auto &i : s)
        {
            if ('A' <= i && 'Z' >= i)
                big[i - 'A']++;
            else
                small[i - 'a']++;
        }

        int res = 0;
        for (int i = 0; i < 26; i++)
        {
            int pairs = min(small[i], big[i]);
            res += pairs;
            small[i] -= pairs, big[i] -= pairs;
            int add = min(k, max(small[i], big[i]) / 2);
            res += add, k -= add;
        }
        cout << res << endl;
    }

    return 0;
}