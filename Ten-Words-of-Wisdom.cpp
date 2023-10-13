#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int max=INT_MIN;
        int j=-1;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10)
            {
                if(max<b)
                {
                    max=b;
                    j=i;
                }
            }
        }
        cout<<j+1<<endl;
    }
    return 0;
}