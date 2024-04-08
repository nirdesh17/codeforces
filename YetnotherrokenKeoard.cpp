

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    string s;
        cin >> s;

        int n = s.size();
        vector<int> Vis(n, 0);

        stack<int> st, ST;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'b') {
                if(!ST.empty()) {
                    Vis[ST.top()] = 1;
                    ST.pop();
                }

                Vis[i] = 1;
            }
            else if(s[i] == 'B') {
                if(!st.empty()) {
                    Vis[st.top()] = 1;
                    st.pop();
                }

                Vis[i] = 1;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {
                st.push(i);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') {
                ST.push(i);
            }
        }

        string result = "";

        for(int i = 0; i < n; i++) {
            if(!Vis[i]) {
                result.push_back(s[i]);
            }
        }

        cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}























































































































































































// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long int

// // void solve() {
// //     string s;
// //     cin>>s;
// //     int i=0;
// //     stack<char> st;

// //     while(i<s.length())
// //     {
// //         if(st.empty())
// //         {
// //             if(s[i]!='b' and s[i]!='B')
// //             {
// //                 st.push(s[i]);
// //             }
// //             else
// //                 continue;
// //         }
// //         else
// //         {
// //             if(s[i]!='b' and s[i]!='B')
// //             {
// //                 st.push(s[i]);
// //             }
// //             else
// //             {
// //                 if(s[i]=='b')
// //                 {
// //                     while(st.empty())
// //                     {
// //                         if(st.top()>'a' and st.top()<'z')
// //                         {
// //                             st.pop();
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //     }
// // }

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     ll t;
// //     cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// //     return 0;
// // }








// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     string s;
//     cin >> s;
//     int i = 0;
//     stack<char> st;
//     stack<char> ST;

//     while (i < s.length()) {
//         if ((s[i] != 'b' && s[i] != 'B') || (st.empty() && s[i] != 'b' && s[i] != 'B')) 
//         {
//             st.push(s[i]);
//         } 
//         else if (s[i] == 'b') 
//         {
//             while(!st.empty() && (st.top() >= 'A' && st.top() <= 'Z'))
//             {
//                 ST.push(st.top());
//                 st.pop();
//             }
//             if (!st.empty() && (st.top() >= 'a' && st.top() <= 'z')) 
//             {
//                 st.pop();
//             }
//         } 

//         else if (s[i] == 'B') 
//         {
//             while(!st.empty() && (st.top() >= 'a' && st.top() <= 'z'))
//             {
//                 ST.push(st.top());
//                 st.pop();
//             }
//             if (!st.empty() && (st.top() >= 'A' && st.top() <= 'Z')) 
//             {
//                 st.pop();
//             }
//         }
//         i++;
//         while(!ST.empty())
//         {
//             st.push(ST.top());
//             ST.pop();
//         }
//     }

//     string result = "";
//     while (!st.empty()) {
//         result = st.top() + result;
//         st.pop();
//     }

//     cout << result << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     cin.ignore();  // consume the newline character after reading t
//     while (t--) {
//         solve();
//     }
//     return 0;
// }









