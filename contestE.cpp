#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        int c,d;
        int e,f;
        cin>>a>>b;
        cin>>c>>d;
        cin>>e>>f;
        int sum ,SUM;
         sum = abs(c-a);
         SUM= abs(d-b);
         if(a==b && c==d)
         {
             cout<<sum+SUM<<endl;
         }
         else if (a==c & b!=d)
         {
             cout<<sum+SUM+2<<endl;
         }
         else if()
    }
    return 0;
}