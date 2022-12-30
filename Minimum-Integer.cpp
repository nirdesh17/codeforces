#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int l,r,d;
    int q;
    int div=0;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>l>>r>>d;
        if(d<l)
        {
            cout<<d<<endl;
        }
        else if(d<=r)
        {
            div=r/d;
            div++;
            cout<<d*div<<endl;
        }
        else
        {
            cout<<d<<endl;
        }
    }
    return 0;
}