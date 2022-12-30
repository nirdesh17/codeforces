#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    long long k,l;
    cin>>k;
    cin>>l;
    if(l%k==0 && k!=1)
    {
        cout<<"YES"<<endl;
    
    int z=0;
    long long m=k;
    for(int i=1;i<35;i++)
    {
        m=m*k;
        if(m==l)
        {
            z=i;
            break;
        }
    }
    cout<<z<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}