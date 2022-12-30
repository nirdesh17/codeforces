#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
       int counter=0;
       for(int i=1;i<=n;i++)
       {
        string str1=to_string(i);
        string str2=to_string(i+1);
        
        int sum1=0,sum2=0;
        for(int j=0;j<str1.size();j++)
        {
            int a=stoi(str1[j]);
            sum1=sum1+a;
        }
        for(int j=0;j<str2.size();j++)
        {
            int a=stoi(str2);
            sum2=sum2+a;
        }
        
        if(sum2<sum1)
        {
            counter++;
        }
       }
       cout<<counter<<endl;
       
    }
    return 0;
}