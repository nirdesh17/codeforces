#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m,sum=0;
        cin>>m;
        int even=0;
        int odd=0;
        int a[m];
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                even=even+1;
            }
            else 
            {
                odd=odd+1;
            }
            sum=sum+a[j];
        }
        if(sum%2==0)
        {
            if(even!=0 && odd!=0)
            {
                cout<<"YES"<<endl;
            }
           
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}