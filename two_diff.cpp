#include<iostream>
using namespace std;
int main()
{
    int a[]={2,40,1,56,3};
    // int a[]={-10,20};
    int n=sizeof(a)/sizeof(a[1]);
    // int target;
    // cin>>target;

    for(int i=0;i<n-2;i++)
    {
    for(int j=i+1;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
    }   
            
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}