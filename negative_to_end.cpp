#include<iostream>
using namespace std;

int main()
{
    int a[]={-5, 7, -3, -4, 9, 10, -1, 11};
    int n = sizeof(a)/sizeof(a[0]);
    int k=n;
    int j;
    for(int i=n;i>=0;i--)
    {
        if(a[i]<0)
        {
            int x=a[i];
            for(j=i;j<k;j++)
            {
                a[j]=a[j+1];
            }
            a[j]=x;
            k--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}