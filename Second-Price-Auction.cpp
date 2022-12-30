#include<bits/stdc++.h>
using namespace std;

int maximum(int ar[], int n)
{
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(ar[i]==max)
        {
            return i;
        }
    }
}

void change(int ab[],int j)
{
    int max=ab[0];
    for(int i=0;i<j;i++)
    {
        if(ab[i]>max)
        {
            max=ab[i];
        }
    }

    for(int i=0;i<j;i++)
    {
        if(ab[i]==max)
        {
            ab[i]=0;
        }
    }
}

int price(int ac[],int d)
{
     int max=ac[0];
    for(int i=0;i<d;i++)
    {
        if(ac[i]>max)
        {
            max=ac[i];
        }
    }
    return max;
}

  
int main()
{
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++)
    {
        cin>>arr[i];
    }
    cout<<maximum(arr,test)+1<<" ";
    change(arr,test);
    cout<<price(arr,test);
    return 0;
}

