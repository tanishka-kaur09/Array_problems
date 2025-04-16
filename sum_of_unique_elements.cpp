#include<iostream>
using namespace std;

int main()
{
    int a[5]={1,2,3,3,4};
    int n=5;
    int c=0,sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;
            if(a[j]==a[i])
            {
                c=1;
                break;
            }
        }
        if(c==1) 
        {
            c=0;
            continue;
        }
        sum=sum+a[i];
    }
    cout<<sum;
}