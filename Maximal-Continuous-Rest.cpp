#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int a[n];
    int one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int MAX=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
            if(one>MAX)
            {
                MAX=one;
            }
            one=0;
        }
        else
        {
            one++;
            zero=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
            if(one>MAX)
            {
                MAX=one;
            }
            one=0;
        }
        else
        {
            one++;
            zero=0;
        }
    }
    cout<<MAX<<endl;
    return 0;
}