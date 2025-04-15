#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int char_cnt[26] = {0};
    
    for (int i = 0; i < n; i++)
    {
        if (65 <= s[i] && s[i] <= 90) // uppercase
        {
            char_cnt[s[i] - 65] = 1; // lowercase
        }
        else
        {
            char_cnt[s[i] - 97] = 1;
        }
    }

    int l = 0;
    for (int i = 0; i < 26; i++)
    {
        l += char_cnt[i];
    }
    if (l == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}