#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int res = 0;

        if (n <= 10)
        {
            res = n;
            cout << res << endl;
            continue;
        }

        int x = n;
        // int base = 10;
        // int limit = 1;
        // for (int i = 1; i < 7; i++)
        // {
        //     if (x > base)
        //         limit++;
        //     base *= 10;
        // }
        // int pow_ten = 10;
        // for (int i = 1; i < limit+1; i++)
        // {
        //     res += n / pow_ten;
        //     pow_ten *= 10;
        // }
        res += x / 10 + x / 100 + x / 1000 + x / 10000;

        res += 9;
        cout << res << endl;
    }
    return 0;
}
