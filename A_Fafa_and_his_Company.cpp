#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int divisors = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i == n)
                divisors += 1;
            else
                divisors += 2;
        }
    }
    cout << divisors - 1 << endl; // not the number itself
    return 0;
}
