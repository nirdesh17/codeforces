#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int a,b;
    cin>>a>>b;
    int p,q,r;
    if(a==1 || a==6)
    {
        p=2;
    }
    else
    {
        p=3;
    }
     if(b==1 || b==6)
    {
        q=2;
    }
    else
    {
        q=3;
    }
    r=abs(p-q);
    cout<<p<<" "<<r<<" "<<q<<endl;
    return 0;
}