// ATTEMPTED
// #include <iostream>
// #include <cmath>
// using namespace std;

// string reduce_str(string st)
// {
//     string res = "";
//     int i = 0;
//     while (i < st.size())
//     {
//         res += st[i];
//         if (st[i] == st[i + 1] && i + 2 < st.size())
//         {

//             res.pop_back();
//             i += 2;
//         }
//     }
//     res += st.back();
//     return res;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string p, s;
//         cin >> p >> s;

//         if (reduce_str(p) != reduce_str(s))
//             cout << "NO" << endl;
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }
