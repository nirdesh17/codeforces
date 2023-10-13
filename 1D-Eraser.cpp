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
        ll n,k;
        cin>>n>>k;
        string s="";
        for(int i=0;i<n;i++)
        {
            char a;
            cin>>a;
            s+=a;
        }
        ll i=0,cnt=0;
        while(i<n)
        {
            if(s[i]=='B')
            {
                cnt++;
                ll j=i+k;
                while(i<j && i<n)
                {
                    s[i++]='W';
                }
            }
            else
            {
                i++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}