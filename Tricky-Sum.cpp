#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int test;
    cin>>test;
    for(long long i=0;i<test;i++)
    {
        long long num;
        cin>>num;
        long long counter=0;
        for(long long j=0;num>0;j++)
        {
            if(num%2==0)
            {
                num=num/2;
                counter++;
            }
            else
            {
                if(num==1)
                {
                    break;
                }
                else
                {
                  counter=0;
                   break;
                }
            }
        }
        long long sum=0;
        for(long long j=1;j<=num;j++)
        {
            sum=sum+j;
        }
        for(int j=0;j<=counter;j++)
        {
            sum=sum-pow(2,j)-pow(2,j);
        }
        cout<<sum<<endl;
    }
    return 0;
}