#include<iostream>
using namespace std;
int main()
{
    int a[]={3,-1,7,2,12,-1};
    int n=sizeof(a)/sizeof(a[1]);
    int sum=0,prefix=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=a[i];
        if(sum==2*prefix)
        {
            cout<<"the breaking index is "<<i;
            return 0;
        }
    }
}