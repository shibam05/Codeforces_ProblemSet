#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool flag = false;
        if (n % 2 == 0 || n % k == 0)
        {
            flag == true;
        }
        // else
        int x = n % k;
        if (x % 2 == 0)
        {
            flag = true;
        }
        // else
        int y = n % 2;
        if (y % k == 0)
        {
            flag = true;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}