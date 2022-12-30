#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b,x,y,n;
    cin>>n;
    while(n>0)
    {
        cin>>a>>b>>x>>y;
        if(a==x && b==y)
        {
            cout<<a<<" "<<y<<endl;
        }
        else if(b!=y)
        {
            cout<<b<<" "<<y<<endl;
        }
        else if(a!=x)
        {
            cout<<a<<" "<<x<<endl;
        }
        n--;
    }
    return 0;
}