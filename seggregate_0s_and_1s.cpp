#include<iostream>
using namespace std;
int main()
{
    int a[]={1,0,1,0,1,1};
    int n=sizeof(a)/sizeof(a[1]);
    int s=0, e=n-1;
    while(s<=e)
    {
        if(a[s]==0)
            s++;
        else
            {
                if(a[e]==1)
                    e--;
                else
                {
                    swap(a[s],a[e]);
                    s++;
                    e--;
                }
            }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
}
