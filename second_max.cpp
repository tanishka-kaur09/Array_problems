#include<iostream>
using namespace std;

int second_max(int a[],int n)
{
    int x=a[0];
    for(int i=0;i<n;i++)
        if(a[i]>x)
            x=a[i];

    int second_max=a[0];
    for(int i=0;i<n;i++)
        if(a[i]!=x)
            second_max = max(second_max,a[i]);
    return second_max;
}


int main()
{
    int a[10]={45,23,65,83,5,86,45,9,43,78};
    int n=sizeof(a)/sizeof(a[0]);   //n=40/4
    int ans=second_max(a,n);
    cout<<"second max element is "<<ans;
}

