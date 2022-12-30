#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    int h=0,e=0,l=0,o=0;
    char H='h',E='e',L='l',O='o';
    for(int i=0;s[i]!=E || s[i]!=L || s[i]!=O;i++)
    {
        if(s[i]==H)
        {
            h++;
        }
        else
        {
            break;
        }
    }
    for(int i=0;s[i]!=H || s[i]!=L || s[i]!=O;i++)
    {
        if(s[i]==E)
        {
            e++;
        }
        else
        {
            break;
        }
    }
     for(int i=0;s[i]!=E || s[i]!=L || s[i]!=H;i++)
    {
        if(s[i]==O)
        {
            o++;
        }
        else
        {
            break;
        }
    }
    for(int i=0;s[i]!=H || s[i]!=E || s[i]!=O;i++)
    {
        if(s[i]==L)
        {
            l++;
        }
        else
        {
            break;
        }
    }

    if(h>0 && e>0 && l>1 && o>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}