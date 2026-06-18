// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> candies(n);
//     int i = 0;
//     while (i < n)
//     {
//         cin >> candies[i];
//         i++;
//     }

//     vector<int> res(n);

//     for (int i = 0; i < n; i++)
//     {
//         if (candies[i] < 3)
//             res[i] = 0;
//         else if ((n & (n - 1)) == 0)
//             res[i] = candies[i] / 2 - 1;
//         else
//             res[i] = candies[i] / 2;

//         cout << res[i] << endl;
//     }

//     return 0;
// }