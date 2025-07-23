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
        int a, b, c;
        cin >> a >> b >> c;
        int A, B, C;

        // logic => if maximum already then 0, otherwise (difference from max_element +1)
        A = max(0, max(b - a, c - a) + 1);
        B = max(0, max(a - b, c - b) + 1);
        C = max(0, max(b - c, a - c) + 1);

        printf("%d %d %d\n", A, B, C);
    }

    return 0;
}