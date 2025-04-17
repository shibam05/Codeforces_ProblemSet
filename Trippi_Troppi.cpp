#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string res = "";
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            res += s[0];
        }
        cout << res << endl;
    }
    return 0;
}
