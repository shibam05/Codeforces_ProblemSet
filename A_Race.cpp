#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        if((x < a) == (y < a))
            cout << "YES" << endl;
        else    
            cout << "NO" << endl;
    }
 
    return 0;
}