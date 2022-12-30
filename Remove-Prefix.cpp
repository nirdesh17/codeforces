#include<bits/stdc++.h>
using namespace std;
#define ll long long int

template<class C, typename T>
bool contains(C&& c, T t) {
    return std::find(std::begin(c), std::end(c), t) != std::end(c);
};
  
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
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll counter=0;
        
        for(ll i=n-2;i>=0;i--)
        {
            bool exists = find(begin(a+i+1),end(a), a[i]) != std::end(a);
            if(exists)
            {
                counter=i+1;
                break;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}