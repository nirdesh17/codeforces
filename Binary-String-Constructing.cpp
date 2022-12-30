#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,c;
    cin>>a>>b>>c;
    string s;
    char d='1',e='0';
    ll count1=0;// for 0s
    ll count2=0;// for 1s
    
        if(c==1)
        {
            for(ll j=0;j<b;j++)
            s.push_back(d);
            for(ll j=0;j<a;j++)
            s.push_back(e);
        }
        else if(c%2==0 && a==1)
        {
            s.push_back(d);
            s.push_back(e);
            count1++;count2++;
            for(ll j=0;j<b-count2;j++)
            s.push_back(d);
            for(ll j=0;j<a-count1;j++)
            s.push_back(e);
        }
        
        else
        {
            for(ll i=1;i<c;i++)
            {
                if(c%2==0)
                {
                    if(i%2==0)
                    {
                        s.push_back(d);
                        count2++;
                    }
                    else
                    {
                        s.push_back(e);
                        count1++;
                    }
                }
                else
                {
                    if(i%2==0)
                    {
                        s.push_back(e);
                        count1++;
                    }
                    else
                    {
                        s.push_back(d);
                        count2++;
                    }
                }
            }
            for(ll j=0;j<b-count2;j++)
            s.push_back(d);
            for(ll j=0;j<a-count1;j++)
            s.push_back(e);
        }
    
    cout<<s<<endl;
    return 0;
}