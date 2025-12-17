#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> seen;
    for (int i = 0; i < n; i++)
    {
        string color;
        cin >> color;
        seen.insert(color);
    }

    cout << 6 - n << "\n";
    unordered_map<string, string> mp;
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";
    for (auto &[color, name] : mp)
    {
        if (!seen.count(color))
        {
            cout << mp[color] << endl;
        }
    }
    return 0;
}