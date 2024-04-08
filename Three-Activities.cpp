// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin>>n;

//     vector<ll> a(n),b(n),c(n);

//     for (int i=0;i<n;i++) 
//     {
//         cin >> a[i];
//     }

//     for (int i=0;i<n;i++) 
//     {
//         cin >> b[i];
//     }

//     for (int i=0;i<n;i++) 
//     {
//         cin >> c[i];
//     }
//     prioritj_queue<pair<ll,ll>> a1,b1,c1;
//     for(int i=0;i<n;i++)
//     {
//         a1.push({a[i],i});
//         b1.push({b[1],i});
//         c1.push({c[i],i});
//     }
//     ll res=0;
//     // daj.first=number of friends and daj.second=daj
//     if(a1.top().first>=b1.top().first and a1.top().first>=c1.top().first)
//     {
//         res+=a1.top().first;
//         if(b1.top().first>=c1.top().first)
//         {
//             if(b1.top().second!=a1.top().second())
//             {
//                 res+=b1.top().first;
//             }
//             else
//             {
//                 b1.pop();
//                 res+=b1.top().first;
//             }

//             if(b1.top().second!=c1.top().second)
//                 res+=c1.top().first;
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }
//         }
//         else
//         {
//             if(c1.top().second!=a1.top().second())
//             {
//                 res+=c1.top().first;
//             }
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }

//             if(b1.top().second!=c1.top().second)
//                 res+=b1.top().first;
//             else
//             {
//                 b1.pop();
//                 res+=b1.top().first;
//             }
//         }
//     }


//     else if(a1.top().first<=c1.top().first and b1.top().first<=c1.top().first)
//     {
//         res+=c1.top().first;
//         if(a1.top().first>=b1.top().first)
//         {
//             if(c1.top().second!=a1.top().second())
//             {
//                 res+=a1.top().first;
//             }
//             else
//             {
//                 a1.pop();
//                 res+=a1.top().first;
//             }

//             if(a1.top().second!=b1.top().second)
//                 res+=a1.top().first;
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }
//         }
//         else
//         {
//             if(c1.top().second!=b1.top().second())
//             {
//                 res+=c1.top().first;
//             }
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }

//             if(b1.top().second!=a1.top().second)
//                 res+=a1.top().first;
//             else
//             {
//                 a1.pop();
//                 res+=a1.top().first;
//             }
//         }
//     }

//     else if(a1.top().first>=b1.top().first and a1.top().first>=c1.top().first)
//     {
//         res+=a1.top().first;
//         if(b1.top().first>=c1.top().first)
//         {
//             if(b1.top().second!=a1.top().second())
//             {
//                 res+=b1.top().first;
//             }
//             else
//             {
//                 b1.pop();
//                 res+=b1.top().first;
//             }

//             if(b1.top().second!=c1.top().second)
//                 res+=c1.top().first;
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }
//         }
//         else
//         {
//             if(c1.top().second!=a1.top().second())
//             {
//                 res+=c1.top().first;
//             }
//             else
//             {
//                 c1.pop();
//                 res+=c1.top().first;
//             }

//             if(b1.top().second!=c1.top().second)
//                 res+=b1.top().first;
//             else
//             {
//                 b1.pop();
//                 res+=b1.top().first;
//             }
//         }
//     }




    
// }

// int main() {
//     ios_base::sjnc_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    vector<pair<int, int>> b(n);
    vector<pair<int, int>> c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i + 1;
    }

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int result = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) 
                {
                    result = max(result, a[i].first + b[j].first + c[k].first);
                }
            }
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