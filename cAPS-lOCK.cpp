#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s[0]>=65 && s[0]<=90)
    {
        ll counter=1;
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                counter++;
            }
        }
        if(counter==s.size())
        {
            for(ll i=0;i<s.size();i++)
            {
                s[i]=s[i]+32;
            }
            cout<<s<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    else if(s[0]>=97 && s[0]<=122)
    {
        ll counter=0;
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                counter++;
            }
        }
        if(counter==s.size()-1)
        {
            s[0]=s[0]-32;
            for(ll i=1;i<s.size();i++)
            {
                s[i]=s[i]+32;
            }
            cout<<s<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
    }
    else
    {
        cout<<s<<endl;
    }
    
    return 0;
}