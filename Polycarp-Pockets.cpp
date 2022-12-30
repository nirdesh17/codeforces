#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int a[n];
    int counter=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                counter++;
            }
        }
        if(counter>maxi)
        {
            maxi=counter;
        }
        counter=0;
    }
    cout<<maxi<<endl;
    return 0;
}