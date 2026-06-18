// #include <bits/stdc++.h>
// using namespace std;

// struct Casino
// {
//     int l, r, real;
// };

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         long long k;
//         cin >> n >> k;

//         vector<Casino> casinos(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
//         }

//         sort(casinos.begin(), casinos.end(), [](const Casino &a, const Casino &b)
//             { return a.l < b.l; });

//         int idx = 0;
//         long long coins = k;
//         priority_queue<pair<int, int>> pq;

//         while (true)
//         {
//             while (idx < n && casinos[idx].l <= coins)
//             {
//                 pq.push({casinos[idx].real, casinos[idx].r});
//                 ++idx;
//             }

//             while (!pq.empty())
//             {
//                 auto [real, r] = pq.top();
//                 pq.pop();
//                 if (coins <= r)
//                 {
//                     coins = real;
//                     goto CONTINUE;
//                 }
//             }
//             break;

//         CONTINUE:;
//         }

//         cout << coins << '\n';
//     }

//     return 0;
// }
