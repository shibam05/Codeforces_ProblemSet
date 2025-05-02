#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    int res = 1;
    if (t == 1)
    {
        res = 1;
        cout << res << endl;
        return 0;
    }
    string first;
    cin >> first;
    int prev = first[1];
    for (int i = 1; i < t; i++)
    {
        string curr;
        cin >> curr;
        if (curr[0] == prev)
        {
            res++;
            prev = curr[1];
        }
    }
    cout << res << endl;
    return 0;
}
