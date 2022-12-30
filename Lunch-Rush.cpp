#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n,k;
    cin>>n>>k;
    long long Max=-1000000000;
    for(int i=0;i<n;i++)
    {
        int a,b,MAX=0;
        cin>>a>>b;
        if(b>k)
        {
            MAX=a-(b-k);
        }
        else
        {
            MAX=a;
        }
        if(MAX>=Max)
        {
            Max=MAX;
        }
    }
    cout<<Max<<endl;
    return 0;
}