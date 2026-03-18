#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int res = 0;
    int n;
    cin >> n;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
            res++;
    }
    cout << res << '\n';
    return 0;
}
