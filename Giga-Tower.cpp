#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool num(ll n)
{
    bool yes=false;
    
    n/=10;
    while(n>0)
    {
        if(n%10==8)
        {
            yes=true;
            return yes;
        }
        n/=10;
    }
    return yes;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n=-8;
    cin>>n;
    if(n%10==8)
    cout<<10<<endl;
    else if(n%10<0)
    cout<<abs(n%10)+8<<endl;
    else
    {
        if(num(n))
        cout<<1<<endl;
        else
        {
            if(n%10<8)
            {
                cout<<8-n%10<<endl;
            }
            else if(n%100>78 && n%10<80)
            {
                cout<<80-n%100<<endl;
            }
            else
            {
                cout<<9<<endl;
            }
        }
    }
    return 0;
}