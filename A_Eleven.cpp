#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int f1 = 1, f2 = 1;
    string name(n, 'o');

    name[f1 - 1] = 'O';
    // name[f2 - 1] = 'O';

    while (true)
    {
        int next = f1 + f2;
        if (next - 1 >= n)
            break;
        name[next - 1] = 'O';
        f1 = f2;
        f2 = next;
    }

    cout << name << endl;
    return 0;
}
