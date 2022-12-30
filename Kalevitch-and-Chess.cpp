#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a[8][8];
    ll count=0;
    for(ll i=0;i<8;i++)
    {
        for(ll j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
    bool paint=true;
    for(ll i=0;i<8;i++)
    {
        paint=true;
        for(ll j=0;j<8;j++)
        {
            if(a[i][j]=='W')
            paint=false;
        }
        if(paint)
        count++;
    }
    for(ll i=0;i<8;i++)
    {
        paint=true;
        for(ll j=0;j<8;j++)
        {
            if(a[j][i]=='W')
            paint=false;
        }
        if(paint)
        count++;
    }
    if(count==16)
    {
        cout<<8<<endl;
    }
    else
    cout<<count<<endl;
    return 0;
}