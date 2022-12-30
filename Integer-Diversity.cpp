#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
        test--;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a + n);
        int counter2=0,c=0,counter=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                counter++;
            }
            else if(a[i]!=a[i+1] && counter>=1)
            {
                counter2=counter2+1;
                c=c+1;
                counter=0;
            }
        }
        cout<<c+counter2<<endl;
    }
    return 0;
}