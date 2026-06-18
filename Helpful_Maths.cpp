// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int one = 0, two = 0, three = 0;

//     for (char ch : s)
//     {
//         if (ch == '1')
//             one++;
//         else if (ch == '2')
//             two++;
//         else if (ch == '3')
//             three++;
//     }

//     string res = s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (res[i] != '+')
//         {
//             if (one > 0)
//             {
//                 res[i] = '1';
//                 one--;
//                 break;
//             }
//             else if (two > 0)
//             {
//                 res[i] = '2';
//                 two--;
//                 break;
//             }
//             else if (three > 0)
//             {
//                 res[i] = '3';
//                 three--;
//                 break;
//             }
//         }
//         else
//             continue;
//     }

//     cout << res << endl;

//     return 0;
// }