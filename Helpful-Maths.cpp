#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,sum=0,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s>=0)
        {
            sum=sum+s;
        }
        else
        {
            if(sum==0)
            {
                count=count+1;
            }
            else
            {
                sum=sum-1;
            }
        }
    }
    cout<<count<<endl;
   
    return 0;
}