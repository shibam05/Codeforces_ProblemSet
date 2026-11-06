#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int len;
        cin >> len;
        string st;
        st.reserve(len);
        cin >> st;

        int i = 0;
        bool m = false, e = false, o = false, w = false;

        while ((char)tolower(st[i]) == 'm')
        {
            i++;
            m = true;
        }

        while ((char)tolower(st[i]) == 'e')
        {
            i++;
            e = true;
        }

        while ((char)tolower(st[i]) == 'o')
        {
            i++;
            o = true;
        }

        while ((char)tolower(st[i]) == 'w')
        {
            i++;
            w = true;
        }

        if (i == len && m && e && o && w)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}