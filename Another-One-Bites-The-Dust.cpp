#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    
    if(abs(a-b)==1)
    {
         cout<<a+b+(2*c)<<endl;
    }
    else
    {
       if(a==b)
       {
            cout<<a+b+(2*c)<<endl;
       }
       else
       {
            cout<<min(a,b)+min(a,b)+(2*c)+1<<endl;
       }
    }
    return 0;
}