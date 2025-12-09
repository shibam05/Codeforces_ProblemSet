#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int thomas_score = 0;
    int rank = 1;

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int scores_i = a + b + c + d;
        if (i == 0)
            thomas_score = scores_i;
        if (scores_i > thomas_score)
            rank++;
    }
    cout << rank << endl;
    return 0;
}
