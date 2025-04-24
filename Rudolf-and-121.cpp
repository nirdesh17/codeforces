// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve() {
//     ll n;
//     cin>>n;
//     vector<ll> a(n);
//     for(int i=0;i<n;i++)
//         cin>>a[i];
//     int i=0,j=n-1;
//     while(i+1<=j-1)
//     {
//         if(a[i]!=0 & a[j]!=0)
//         {
//             if(a[i]<a[i+1])
//             {
//                 a[i]--;
//                 if(a[i+1]-2<0)
//                 {
//                     cout<<"NO"<<endl;
//                     return;
//                 }
//                 else
//                     a[i+1]-=2;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//                 return;
//             }
//             if(a[j-1]>a[j])
//             {
//                 a[j]--;
//                 if(a[j-1]-2<0)
//                 {
//                     cout<<"NO"<<endl;
//                     return;
//                 }
//                 else
//                     a[j-1]-=2;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//                 return;
//             }

//             if(a[i]==0) i++;
//             if(a[j]==0) j--;
//         }
//         else
//         {
//             if(a[i]==0) i++;
//             if(a[j]==0) j--;
//         }
//     }
//     if(i==j)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
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
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=1;
    while(i<n-1)
    {
        if(a[i-1]==0)
        {
            i++;
            continue;
        }
        // a[i-1]--;
        // a[i]-=2;
        // a[i+1]--;

        int op=a[i-1];
        a[i-1]=0;
        a[i]-=(2*op);
        a[i+1]-=op;
        
        if(a[i-1]<0 || a[i]<0 || a[i+1]<0)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(a[i-1]==0)
            i++;
    }

   for(int j=0;j<n;j++)
   {
        if(a[j]!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
   }
   cout<<"YES"<<endl;
    
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