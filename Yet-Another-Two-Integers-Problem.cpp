#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }

        ll sub,div,mod;
        sub=b-a;
        div=sub/10;
        mod=sub%10;
        if(mod>0)
        {
            div++;
        }
        cout<<div<<endl;

    }
    return 0;
}