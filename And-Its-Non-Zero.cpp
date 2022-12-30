#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        test--;
        int l,r;
        cin>>l>>r;
        int len=r-l+1;
        int a[len];
        for(int i=0;i<len;i++)
        {
            a[i]=l+i;
        }
        int counter=0;
        for(int i=0;i<len-1;i++)
        {
            if((a[i]&a[i+1])==0)
            {
                // a[i+1]=a[i+1]+1;
                a[i+1]=a[i+2];
                counter++;

            }
        }
        cout<<counter<<endl;
        for(int i=0;i<len-counter;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}