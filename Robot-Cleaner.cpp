#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n , m, rb, cb, rd, cd ;
        cin>>n>>m>>rb>>cb>>rd>>cd;
        int count1=0,count2=0,count3=0,count4=0;
        int a=rb+1,b=cb+1;
        for(a,b;a<=n && b<=m;a++,b++)
        {
            if(a==rd || b==cd)
            {
                goto End;
            }
            else
            {
                count1++;
            }
        }
        
        int c=a-1-1,d=b+1-1;
        for(c,d;c>=1 && d<=m;c--,d++)
        {
            if(c==rd || d==cd)
            {
                goto End;
            }
            else
            {
                count2++;
            }
        }

        int e=c+1+1,f=d-1-1;
        for(e,f;e<=n && f>=1;e++,f--)
        {
            if(e==rd || f==cd)
            {
                goto End;
            }
            else
            {
                count3++;
            }
        }

        int g=e-1-1,h=f-1+1;
        for(g,h;g>=1 && h>=1;g--,h--)
        {
            if(g==rd || h==cd)
            {
                goto End;
            }
            else
            {
                count4++;
            }
        }
        End:
        cout<<count1+count2+count3+count4<<endl;
    }
    return 0;
}