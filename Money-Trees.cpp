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
//         ll n,k;
//         cin>>n>>k;
//         ll a[n],b[n];
//         for(int i=0;i<n;i++)
//             cin>>a[i];
//         for(int i=0;i<n;i++)
//             cin>>b[i];

//         ll i=0,j=0;
//         ll cnt=0;
//         ll ans=0;
//         while (j < n - 1) 
//         {
//             if (b[j] % b[j + 1] == 0 && cnt + a[j] <= k) {
//                 cnt += a[j];
//                 j++;
//             } else {
//                 if(cnt+a[j]<=k)
//                     ans = max(ans, j - i + 1);
//                 else
//                     ans=max(ans,j-i);
//                 cnt = 0;
//                 i = j++;
//             }
//         }

//         cout<<ans<<endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll n,k;
ll a[200000],h[200000],p[200000+5],l[200005];
bool check(ll m)
{
    bool f=false;
    for(int i=0;i<n-m+1;i++)
    {
        if(l[i]<m){continue;}
        int sum=p[i+m]-p[i];
        if(sum<=k)
        {
            f=true;
            break;
        }
    }
    return f;
}
void solve()
{
    cin >> n >> k ;
    p[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[i+1]=p[i]+a[i];
    }
    for(int i=0;i<n;i++)
        cin>>h[i];

    l[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        if(h[i]%h[i+1]==0)
        {
            l[i]=l[i+1]+1;
        }
        else    
            l[i]=1;
    }

    ll s=1,r=200000;
    while(s<=r)
    {
        ll m=(s+r)/2;
        if(check(m))
            s=m+1;
        else
            r=m-1;
    }
    cout<<r<<endl;
}
     
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    { solve(); }
    return 0;
}