#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0 && n % 6 == 0)
        {
            cout << n / 6 << " " << n / 4 << endl;
            continue;
        }
        else if (n % 4 == 0)
        {
            cout << n / 4 << " " << n / 4 << endl;
            continue;
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
    }
    return 0;
}
