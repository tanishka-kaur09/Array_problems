#include<iostream>
using namespace std;

int main()
{
    int a[5]={0,-1,2,6,1};
    int n = sizeof(a)/sizeof(a[1]);
    int i;
    for(int j=1;j<=n+1;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<=0)
                continue;
            if(a[i]==j)
                break;
            else
                continue;
        }
        if(i==n)
        {
            cout<<j;
            return 0;
        }
    }
}