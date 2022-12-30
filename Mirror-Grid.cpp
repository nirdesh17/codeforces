#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void transpose(ll N ,ll A[][N])
{
    for (int i = 0; i < N; i++)
        for (int j = i+1; j < N; j++)
            swap(A[i][j], A[j][i]);
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n];
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        ll b[n][n],c[n][n],d[n][n];
        b=transpose(n,a);
        c=transpose(n,b);
        d=transpose(n,c);


    }
    return 0;
}