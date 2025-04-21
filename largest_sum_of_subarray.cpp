#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[]={2,-6,7,6,-2,12,-4};
    int n=sizeof(a)/sizeof(a[1]);
    int prefix=0, maxi=INT_MIN;

    //brute force

    // for(int i=0;i<n;i++)
    // {
    //     prefix=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         prefix+=a[j];
    //         maxi=max(prefix,maxi);
    //     }
    // }
    // cout<<maxi;

    //KADANE'S ALGORITHM

    for(int i=0;i<n;i++)
    {
        prefix+=a[i];
        if(prefix<0)
            prefix=0;
        maxi=max(maxi,prefix);
    }
    cout<<maxi;
}