#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ones = 0, zeros = 0;
        for (char ch : s)
        {
            if (ch == '1')
                ones++;
            else
                zeros++;
        }

        int op = min(ones, zeros);
        if (op & 1 == 1)
        {
            cout << "DA" << endl;
        }
        else
            cout << "NET" << endl;
    }

    return 0;
}