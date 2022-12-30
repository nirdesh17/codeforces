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
        ll n,counter=1;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            counter++;
        }
        ll sum=n-counter;
        cout<<counter*2+sum<<endl;
    }
    return 0;
}