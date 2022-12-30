#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int oppo,days;
    cin>>oppo>>days;
    int present[days][oppo];
    for(int i=0;i<days;i++)
    {
        for(int j=0;j<oppo;j++)
        {
            cin>>present[i][j];
        }
    }
    int counter=0;
    int check;
   for(int i=0;i<days;i++)
    {
        int count=0;
        for(int j=0;j<oppo;j++)
        {
            if(present[i][j]==1)
            {
                count++;
            }
        }
        if(count==oppo)
        {
            check=counter;
            counter=0;
        }
        else
        {
            counter+=1;
        }
    }
    if(check>counter)
    {
        cout<<check<<endl;
    }
    else
    {
        cout<<counter<<endl;
    }
    return 0;
}