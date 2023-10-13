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
        int a[5]={1,2,3,4,5};
        ll ans=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                char a;
                cin>>a;
                if(a=='X')
                {
                    if((i==0 && j>=0 && j<=9) || (i==9 && j>=0 && j<=9) || (j==0 && i>=0 && i<=9) || (j==9 && i>=0 && i<=9))
                        ans+=1;
                    else if((i==1 && j>=1 && j<=8) || (i==8 && j>=1 && j<=8) || (j==1 && i>=1 && i<=8) || (j==8 && i>=1 && i<=8))
                        ans+=2;
                    else if((i==2 && j>=2 && j<=7) || (i==7 && j>=2 && j<=7) || (j==2 && i>=2 && i<=7) || (j==7 && i>=2 && i<=7))
                        ans+=3;
                    else if((i==3 && j>=3 && j<=6) || (i==6 && j>=3 && j<=6) || (j==3 && i>=3 && i<=6) || (j==6 && i>=3 && i<=6))
                        ans+=4;
                    else if((i==4 && j>=4 && j<=5) || (i==5 && j>=4 && j<=5) || (j==4 && i>=4 && i<=5) || (j==5 && i>=4 && i<=5))
                        ans+=5;
                    
                    // cout<<"i-"<<i<<" "<<"j-"<<j<<" "<<ans<<endl;

                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}