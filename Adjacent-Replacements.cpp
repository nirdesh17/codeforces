// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
  
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin>>n;
//     ll a[n];
//     for(ll i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     ll c=*max_element(a, a + n);
//     for(ll i=1;i<=c;i++)
//     {
//         for(ll j=0;j<n;j++)
//         {
//             if(i==a[j])
//             {
//                 if(i%2==0)
//                 {
//                     a[j]=a[j]-1;
//                 }
//                 else
//                 {
//                     a[j]=a[j]+1;
//                 }
//             }
//         }
//     }

//     for(ll i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        a[i]=a[i]-1;
    }
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}