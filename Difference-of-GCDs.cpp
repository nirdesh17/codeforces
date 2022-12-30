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
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> a;
        ll counter=1;
        for(ll i=l;i<r+1;i++)
        {
            if(counter>n)
            break;
            if(__gcd(i,counter)==counter)
            {
                a.push_back(i);
                counter++;
            }
        }
        if(a.size()==n)
        {
            cout<<"YES"<<endl;
            for(ll i=0;i<a.size();i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}