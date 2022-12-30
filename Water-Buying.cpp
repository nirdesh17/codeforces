#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<n*a<<endl;
        }
        else if(a>b || (2*a)>b)
        {
            long long m=n/2;
            long long p=n%2;
            cout<<(m*b)+(p*a)<<endl;
        }
        else 
        {
            cout<<n*a<<endl;
        }
    }
    return 0;
}