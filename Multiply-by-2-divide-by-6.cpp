#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;t++)
    {
        int n;
        cin>>n;
        int counter=0;
        if(n%6==0)
        {
            while(n>1)
            {
                n=n/6;
                counter++;
            }
        }
        else
        {
            if(n%3==0 && (n*2)%6==0)
            {
                counter=2;
            }
            else
            {
                counter=-1;
            }
        }        
        cout<<counter<<endl;
    }
    return 0;
}