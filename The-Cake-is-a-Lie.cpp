#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a=1,b=1,x,y,k,c,d,e,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>k;
        a=x;
        c=(x-1)*b;
        d=(y-1)*a;
        e=c+d;
        if(k==e)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}