#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ll t;
    cin>>t;
    while(t>0)
    {
        t--;
        ll i;
        cin>>i;
        if(i%2==0)
        {
            while(i>1)
            {
                i=i/2;
                if(i%2!=0 && i!=1)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(i==1)
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