#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if ((w & 1) == 1)
        cout << "NO" << endl;
    else
    {
        if (w == 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}