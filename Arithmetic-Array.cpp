#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[j];
        }
        if(sum<n)
        {
            cout<<1<<endl;
        }
        
        else
        {
            cout<<sum-n<<endl;
        }
    }
    return 0;
}