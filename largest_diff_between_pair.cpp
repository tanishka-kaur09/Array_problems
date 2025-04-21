#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[]={2,6,17,12,8,3};
    int n=sizeof(a)/sizeof(a[1]);
    int diff, maxi=INT_MIN;

    //brute force

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         diff=a[j]-a[i];
    //         maxi=max(maxi,diff);
    //     }
    // }
    // cout<<maxi;  

    maxi=a[n-1];
    int ans=INT_MIN;
    for(int i=n-2;i>=0;i--)
    {
            maxi=max(maxi,a[i]);
            if(a[i]<maxi)
                ans=max(ans,maxi-a[i]);
    }
    cout<<ans;
}