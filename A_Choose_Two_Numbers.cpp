#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;
    int max_n = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        max_n = max(max_n, x);
    }
    cin >> m;
    int max_m = INT_MIN;
    for (int j = 0; j < m; j++)
    {
        int x;
        cin >> x;
        max_m = max(max_m, x);
    }

    cout << max_n << " " << max_m << endl;
    return 0;
}