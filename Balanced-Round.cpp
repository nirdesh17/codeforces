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
        ll n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        int i=0,j=1;
        int Max=0;
        sort(a.begin(),a.end());
        while(j<a.size())
        {
            if(abs(a[j-1]-a[j])<=k)
            {
                j++;
            }
            else
            {
                Max=max(Max,j-i);
                i=j;
                j++;
                // cout<<"M-"<<Max<<endl;
            }
        }
        Max=max(Max,j-i);
        cout<<n-Max<<endl;
    }
    return 0;
}