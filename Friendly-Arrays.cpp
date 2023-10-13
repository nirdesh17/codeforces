// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
  
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,m;
//         cin>>n>>m;
        
//         ll a[n],b[m];
        
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         for(int i=0;i<m;i++)
//         {
//             cin>>b[i];
//         }
        
//         ll c=a[0];
//         for(int i=1;i<n;i++)
//         {
//             c^=a[i];
//         }
//         // cout<<"c-"<<c<<endl;
//         ll Min=INT_MAX,Max=INT_MIN;
//         for(int i=0;i<m;i++)
//         {
//             Min=min(Min,c|b[i]);
//             Max=max(Max,c|b[i]);
//             // cout<<"Min-"<<Min<<" "<<"Max-"<<Max<<endl;
//         }
//         Min=min(Min,c);
//         Max=max(Max,c);
//         cout<<Min<<" "<<Max<<endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        
        ll a[n],b[m];
        // bool han=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        } 
        sort(b,b+m);
        ll Min=a[0]|b[0];
        for(int i=1;i<n;i++)
        {
            Min^=a[i]|b[0];
        }
        ll Max=a[0]|b[m-1];
        for(int i=1;i<n;i++)
        {
            Max^=a[i]|b[m-1];
        }

        ll c=a[0];
        for(int i=1;i<n;i++)
        {
            c^=a[i];
        }
        Min=min(Min,c);
        Max=max(Max,c);

        cout<<Min<<" "<<Max<<endl;        
    }
    return 0;
}