#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0;

    while (n--)
    {
        string op;
        cin >> op;
        // op is either ++x or x++ or --x or x--
        if (op[1] == '+')
            x++;
        else
            x--;
    }

    cout << x << endl;

    return 0;
}