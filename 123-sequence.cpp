#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n,counter1=0,counter2=0,counter3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            counter1++;
        }
        else if(a[i]==2)
        {
            counter2++;
        }
        else
        {
            counter3++;
        }
    }
    int MAX=max(counter1,max(counter2,counter3));
    cout<<n-MAX<<endl;
    return 0;
}