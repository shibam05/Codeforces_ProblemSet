#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    int k = 0;
    while (k < n)
    {
        cin >> words[k++];
    }

    for (int i = 0; i < n; i++)
    {
        if (words[i].size() > 10)
        {
            string abbreviation = words[i][0] + to_string(words[i].size() - 2) + words[i][words[i].size() - 1];
            words[i] = abbreviation;
        }
    }

    for (string s : words)
        cout << s << endl;

    return 0;
}