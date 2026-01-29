#include <bits/stdc++.h>
using namespace std;

int mex(const vector<int>& v) {
    unordered_set<int> s(v.begin(), v.end());
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int res = 0;

        for (int i = 0; i < n; i++) {
            int x = -a[i];
            vector<int> shifted(n);
            for (int j = 0; j < n; j++) {
                shifted[j] = a[j] + x;
            }
            res = max(res, mex(shifted));
        }

        cout << res << endl;
    }
    return 0;
}
