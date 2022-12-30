#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    long n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long p,a,b,c;
        long p1,p2,p3;
        cin>>p>>a>>b>>c;
        if(p%a==0)
        {
            p1=0;
        }
        else if(p>a)
        {
            p1=abs(p-(a*2));
        }
        else
        {
            p1=abs(p-a);
        }
        
        if(p%b==0)
        {
            p2=0;
        }
        else if(p>b)
        {
            p2=abs(p-(b*2));
        }
        else
        {
            p2=abs(p-b);
        }


         if(p%c==0)
        {
            p3=0;
        }
        else if(p>a)
        {
            p3=abs(p-(c*2));
        }
        else
        {
            p3=abs(p-c);
        }


        cout<<min(min(p1,p2),p3)<<endl;

    }
    return 0;
}