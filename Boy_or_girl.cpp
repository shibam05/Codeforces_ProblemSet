#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> letter_set(26, 0);

    for (char ch : s)
    {
        letter_set[ch - 'a'] = 1;
    }

    int l = 0;

    for (int i = 0; i < 26; i++)
    {
        if (letter_set[i] == 1)
            l += 1;
    }

    if (l % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}