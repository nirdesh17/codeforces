#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,num=0;
    cin>>n;
    vector<int> v;
    ll num1=n;
        for(ll i=1;i<=n*n;i++)
        {
            v.push_back(i);
        }
        while(num1--)
        {
            if(n%2==0)
            {
                for(ll i=num;i<num+n/2;i++)
                {
                    cout<<v[i]<<" ";
                }
            }
            else
            {
                for(ll i=num;i<num+n/2+1;i++)
                {
                    cout<<v[i]<<" ";
                }
            }
                for(ll i=v.size()-num-1;i>=v.size()-num-n/2;i--)
                {
                    cout<<v[i]<<" ";
                }
            num=num+n/2;
            cout<<endl;
        }
    return 0;
}