#include<iostream>
using namespace std;
int main()
{
    int a[]={2,7,11,12,15,20};
    int target;
    cin>>target;
    int n=sizeof(a)/sizeof(a[1]);
    int start=0,end=n-1;
    while(start<=end)
    { 
        if((a[start]+a[end])==target)
        {
            cout<<start<<","<<end;
            break;
        }
        else if((a[start]+a[end])>target)
            end--;
        else
            start++;
    }
}