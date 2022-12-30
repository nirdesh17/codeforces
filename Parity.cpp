#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int b,k;
    cin>>b>>k;
    int a[k];
    long long n=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        n=n+a[i]*pow(b,k-i-1);
    }
    if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    return 0;
}


