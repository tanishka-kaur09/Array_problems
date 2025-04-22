#include<iostream>
using namespace std;
int main()
{
int a[]={4,2,0,5,2,6,2,3};
int n=sizeof(a)/sizeof(a[1]);
int sum=0;
// vector <int> l;
// vector <int> r;
int l[n];
int r[n];
l[0]=0;
r[n-1]=0;
for(int i=1;i<n;i++)
{
    if(a[i-1]<l[i-1])
        l[i]=l[i-1];
    else
        l[i]=a[i-1];
}
for(int i=n-2;i>=0;i--)
{
    if(a[i+1]<r[i+1])
        r[i]=r[i+1];
    else
        r[i]=a[i+1];
}

// for(int i=0;i<n;i++)
//     cout<<l[i];
// cout<<endl;
// for(int i=0;i<n;i++)
//     cout<<r[i];

for(int i=0;i<n;i++)
{
    if(l[i]<r[i])
        a[i]=l[i]-a[i];
    else
        a[i]=r[i]-a[i];
    if(a[i]<0)
        a[i]=0;
}

for(int i=0;i<n;i++)
    sum+=a[i];
cout<<sum;
}