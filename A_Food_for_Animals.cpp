#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (a + b + c < x + y)
        {
            cout << "No" << endl; // end immedietly
            continue;
        }
        
        x -= a;
        y -= b;
        if (x <= 0 && y <= 0)
        {
            cout << "Yes" << endl;
            continue;
        }

        if (x >= 0 && y >= 0)
        {
            if (c >= x + y)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
        else if (y > 0)
        {
            bool pos = false;
            if (c >= y)
                pos = true;
            if (pos)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
        else if (x > 0)
        {
            bool pos = false;
            if (c >= x)
                pos = true;
            if (pos)
            {
                cout << "Yes" << endl;
                continue;
            }
            else
            {
                cout << "No" << endl;
                continue;
            }
        }
    }

    return 0;
}