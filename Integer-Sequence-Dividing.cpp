#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    if(sum%2==0)
    cout<<0<<endl;
    else
    cout<<1<<endl;
    return 0;
}