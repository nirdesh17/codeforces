#include<bits/stdc++.h>
using namespace std;

int lastDigit(int n)
{
    n=n%10;
    return n;
}

int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

  
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int num;
        cin>>num;
        int m=lastDigit(num);
        int sum=((m-1))*10;
        int lenght=countDigit(num);
        switch (lenght)
        {
        case 1:
            cout<<sum+1<<endl;
            break;
        case 2:
            cout<<sum+3<<endl;
            break;    
        case 3:
            cout<<sum+6<<endl;
            break;
        case 4:
            cout<<sum+10<<endl;
            break; 
        default:
            break;
        }
    }
    return 0;
}

