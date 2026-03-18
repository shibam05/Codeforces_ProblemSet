#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int res = 0;
    int k, r;
    cin >> k >> r;
    if (k % 10 == 0 || k % 10 == r)
    {
        res = 1;
    }
    else
    {
        for (int i = 2; i < 10; i++)
        {
            int n = k;
            n *= i;
            if (n % 10 == 0 || n % 10 == r)
            {
                res = i;
                break;
            }
        }
    }
    cout << res << '\n';
    return 0;
}
