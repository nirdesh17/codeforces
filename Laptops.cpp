#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n][2];
    ll odd=0,even=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if(a[i][0]>a[i][1])
        {cout<<"Happy Alex"<<endl;
        return 0;}
        
    }
    
    cout<<"Poor Alex"<<endl;
    return 0;
}