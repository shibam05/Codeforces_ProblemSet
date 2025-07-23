#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int vals[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> vals[i];
    }

    string s;
    cin >> s;
    int calories = 0;
    for (int i = 0; i < s.size(); i++)
    {
        calories += vals[s[i] - '1'];
    }
    printf("%d", calories);
    return 0;
}